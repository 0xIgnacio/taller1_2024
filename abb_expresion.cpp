#include "./headers/abb_expresion.h"

// AUXILIAR

//BASE
void crear(abb &arbol) {
  arbol = nullptr;
}

void insertar(abb &arbol, datos nuevo) {
  arbol = new nodoA;
  arbol->info = nuevo;
  arbol->izq = nullptr;
  arbol->der = nullptr;
}

void insertar(abb &arbol, abb izq, abb der, datos nuevo) {
  arbol = new nodoA;
  arbol->info = nuevo;
  arbol->izq = izq;
  arbol->der = der;
}

void insertarNot(abb &arbol) {
}

void mostrar(abb arbol) {
  if (arbol != nullptr) {
    mostrar(arbol->izq);
    mostrar(getDatos(arbol));
    mostrar(arbol->der);
  }
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
  if (getTipo(getDatos(arbol)) == va)
    return getValor(getDatos(arbol));
  else if (getTipo(getDatos(arbol)) == op) {
    if (getOperador(getDatos(arbol)) == AND)
      return evaluar(arbol->izq) && evaluar(arbol->der);
    else if (getOperador(getDatos(arbol)) == OR)
      return evaluar(arbol->izq) || evaluar(arbol->der);
    else
      return !evaluar(arbol->der);
  }
  return false;
}

