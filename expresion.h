#ifndef EXPRESION_H
#define EXPRESION_H

#include "abb_expresion.h"

typedef struct expresion {
  int numero;
  abb arbol;
};

// Getter
abb * getArbol(expresion &exp);

// Funciones base
void cargar(abb arbol, int numero);
void mostrar();

#endif