#ifndef LISTAEXPRESIONES_H_INCLUDED
#define LISTAEXPRESIONES_H_INCLUDED

#include <stdio.h>
#include "expresion.h"

typedef struct _nodoE {
    expresion exp;
    _nodoE * sig;
} nodoE;
typedef _nodoE * lista_expresiones;

// BASE
void crear(lista_expresiones &l);
void destruir(lista_expresiones &l);
boolean esVacia(lista_expresiones l);
boolean existe(lista_expresiones lista, int num);
void insFront(lista_expresiones &lExp, expresion e);
void mostrar(lista_expresiones lExp, int i);
void mostrar(lista_expresiones lExp);
expresion find(lista_expresiones lExp, int i);
expresion getExpresion(lista_expresiones lExp);

#endif // LISTAEXPRESIONES_H_INCLUDED
