#ifndef ABB_EXPRESION_H
#define ABB_EXPRESION_H

#include "info_nodo.h"

typedef struct nodoA {
  datosABB data;
  nodoA * i;
  nodoA * d;
};
typedef nodoA * abbExpresion;

#endif