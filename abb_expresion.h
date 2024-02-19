#ifndef ABB_EXPRESION_H
#define ABB_EXPRESION_H

#include "info_nodo.h"

typedef struct _nodoA {
  datosABB data;
  _nodoA * i;
  _nodoA * d;
} nodoA;
typedef nodoA * abbExpresion;

// Funciones auxiliares
void insertarParentesisIzqAux(abbExpresion abb, nodoA * nuevo);
void insertarParentesisDerAux(abbExpresion abb, nodoA * nuevo);

// Funciones base
void crear(abbExpresion &abb);
void destruir(abbExpresion &abb);
void insertarAtomic(abbExpresion &abb, datosABB data);

// Get
datosABB * getDatos(abbExpresion abb);

// Metodos
void insertarParentesisIzq(abbExpresion abb);
void insertarParentesisDer(abbExpresion abb);

#endif
