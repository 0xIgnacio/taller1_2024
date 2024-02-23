#include "./headers/expresion.h"
#include <stdio.h>

abb getArbol(expresion exp) {
  return exp.arbol;
}

void cargar(expresion &exp, abb arbol, int numero) {
  exp.arbol = arbol;
  exp.numero = numero;
}

void mostrar(expresion exp) {
  printf("%d. ", exp.numero);
  mostrar(getArbol(exp));
}

bool evaluar(expresion exp) {
  if (getTipo(getDatos(getArbol(exp))) == va) {
    return getValor(getDatos(getArbol(exp)));
  } else {
    if (getTipo(getDatos(getArbol(exp))) == op) {
      if (getOperador(getDatos(getArbol(exp))) == NOT) {
        return !evaluar(getArbol(exp)->der);
      }
      
    }
  }
  return false;
}
