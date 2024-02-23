#ifndef LISTA_EXPRESION_H
#define LISTA_EXPRESION_H

#include "expresion.h"

typedef struct _nodoE {
  expresion info;
  _nodoE * sig;
} nodoE;
typedef nodoE * lista_expresion;

// Funciones base
void crear(lista_expresion &listaExp);
void insertar(lista_expresion &listaExp, expresion data);
void mostrar(lista_expresion listaExp);
expresion * buscar(lista_expresion listaExp, int numero);

#endif