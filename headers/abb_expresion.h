#ifndef ABB_EXPRESION_H
#define ABB_EXPRESION_H

#include "datos_arbol.h"

typedef struct _nodoA {
  datos info;
  _nodoA * izq;
  _nodoA * der;
} nodoA;
typedef nodoA * abb;

// BASE
void crear(abb &arbol);
void insertar(abb &arbol, datos nuevo);
void insertar(abb &arbol, abb izq, abb der, datos nuevo);
void mostrar(abb arbol);
bool esVacio(abb arbol);
bool hijoIzqVacio(abb arbol);
bool hijoDerVacio(abb arbol);

// GETTER
datos getDatos(abb arbol);

// METHODS
bool evaluar(abb arbol);

#endif