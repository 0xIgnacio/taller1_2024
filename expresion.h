#ifndef EXPRESION_H
#define EXPRESION_H

#include "abb_expresion.h"

typedef struct {
  int identificador;
  abbExpresion arbol;
} expresion;

// Funciones base
void destruir(expresion &exp);

// Set atributos
void setIdentificador(expresion &exp, int num);
void setArbol(expresion &exp, abbExpresion abb);

// Get atributos
int getIdentificador(expresion exp);
abbExpresion getArbol(expresion exp);

#endif
