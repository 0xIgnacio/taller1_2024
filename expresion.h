#ifndef EXPRESION_H
#define EXPRESION_H

#include "abb_expresion.h"

typedef struct expresion {
  int numero;
  abb arbol;
};

// Getter
abb getArbol(expresion exp);

// Funciones base
void cargar(expresion &exp, abb arbol, int numero);
void mostrar(expresion exp);

// Métodos
bool evaluar(expresion exp);

#endif