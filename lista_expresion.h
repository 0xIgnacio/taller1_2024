#ifndef LISTA_EXPRESION_H
#define LISTA_EXPRESION_H

#include "expresion.h"

typedef struct  _nodoE {
  expresion data;
  _nodoE * sig;
} nodoE;
typedef nodoE * listaExpresiones;

// Funciones base
void crear(listaExpresiones &root);
void destruir(listaExpresiones &root);
void insertar(listaExpresiones &root, expresion data);
nodoE * buscar(listaExpresiones root, expresion data);
void largo(listaExpresiones root);
void esVacia(listaExpresiones root);

// Set atributos
void setData(nodoE* root, expresion data);

// Get atributos
expresion getData(nodoE* root);

#endif
