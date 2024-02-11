#ifndef LISTA_EXPRESION_H
#define LISTA_EXPRESION_H

#include "expresion.h"

typedef struct  _nodoE {
  expresion data;
  _nodoE * sig;
} nodoE;
typedef nodoE * listaExpresiones;

// Set atributos
void setData(nodoE* root, expresion data);

// Get atributos
expresion getData(nodoE* root);

#endif
