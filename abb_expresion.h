#ifndef ABB_EXPRESION_H
#define ABB_EXPRESION_H

#include "info_nodo.h"

typedef struct _nodoA {
  datosABB data;
  _nodoA * i;
  _nodoA * d;
} nodoA;
typedef nodoA * abbExpresion;

// Funciones base
void crear(abbExpresion &abb);
void destruir(abbExpresion &abb);
void insertar(abbExpresion &abb, datosABB data);

#endif
