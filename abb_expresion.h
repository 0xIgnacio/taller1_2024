#ifndef ABB_EXPRESION_H
#define ABB_EXPRESION_H

#include "datos_arbol.h"

typedef struct _nodoA {
  datos info;
  _nodoA * izq;
  _nodoA * der;
};
typedef _nodoA * abb;

// Funciones base
void crear(abb &arbol);
void insertarAtomic();
void insertarCompound();
void mostrar();

#endif