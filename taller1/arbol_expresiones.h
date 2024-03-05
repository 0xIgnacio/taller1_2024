#ifndef ARBOLEXPRESIONES_H_INCLUDED
#define ARBOLEXPRESIONES_H_INCLUDED

#include <stdio.h>
#include "info_arbol.h"

typedef struct _nodoA {
    dato_abb data;
    _nodoA * left;
    _nodoA * right;
} nodoA;
typedef nodoA * arbol;

// AUXILIARES
void numerarAux(arbol root, int &contador);
void colocarParIzq(arbol root);
void colocarParDer(arbol root);

// BASE
void crear(arbol &root);
void destruir(arbol &root);
boolean esVacio(arbol root);
void mostrar(arbol root);
arbol getRaiz(arbol root);
arbol getHijoIzq(arbol root);
arbol getHijoDer(arbol root);
dato_abb getInfo(arbol root);

// REQUERIMIENTOS
void numerarArbol(arbol &root);
void colocarParentesis(arbol &root);
boolean evaluar(arbol root);
arbol clonar(arbol root);
void insertarNodo(arbol &root, dato_abb nuevo);
void insertarRaiz(arbol root, arbol b, dato_abb data, arbol &c);

// CARGAR
void cargarArbolAtomic(arbol &root, string s);
void cargarArbolNot(arbol &root, arbol abb);

// GUARDAR Y LEVANTAR
void guardarArbolAux(arbol root, FILE * f);
void guardarArbol(arbol root, FILE * f);
void levantarArbol(arbol &root, FILE * f);

#endif // ARBOLEXPRESIONES_H_INCLUDED
