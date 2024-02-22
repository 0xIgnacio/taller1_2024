#include "abb_expresion.h"

void crear(abb &arbol) {
  arbol = nullptr;
}

void insertar(abb &arbol, _nodoA * nuevo) {
  if (esVacio(arbol))
    arbol = nuevo;
  else if (hijoIzqVacio(arbol))
    arbol->izq = nuevo;
  else arbol->der = nuevo;
}

void mostrar(abb arbol) {

}

bool esVacio(abb arbol) {
  return arbol == nullptr;
}

bool hijoIzqVacio(abb arbol) {
  return arbol->izq == nullptr;
}

bool hijoDerVacio(abb arbol) {
  return arbol->der == nullptr;
}

// GETTER
datos getDatos(abb arbol) {
  return arbol->info;
}

// METHODS
bool evaluar(abb arbol) {
  if (getTipo(getDatos(arbol)) == valor)
    return getValor(getDatos(arbol));
  else if (getTipo(getDatos(arbol)) == op)
    if (getOperador(getDatos(arbol)) == AND)
      return evaluar(arbol->izq) && evaluar(arbol->der);
    else if (getOperador(getDatos(arbol)) == OR)
      return evaluar(arbol->izq) || evaluar(arbol->der);
    else
      return !evaluar(arbol->der);
}