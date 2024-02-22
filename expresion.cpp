#include "expresion.h"
#include <stdio.h>

abb getArbol(expresion exp) {
  return exp.arbol;
}

void cargar(expresion &exp, abb arbol, int numero) {
  exp.arbol = arbol;
  exp.numero = numero;
}

void mostrar(expresion exp) {
  printf("%d. %s", exp.numero, mostrar(exp.arbol));
}

bool evaluar(expresion exp) {
  if (getTipo(getDatos(getArbol(exp))) == valor) {
    return getValor(getDatos(getArbol(exp)));
  } else {
    if (getTipo(getDatos(getArbol(exp))) == op) {
      
    }
  }
  
}
