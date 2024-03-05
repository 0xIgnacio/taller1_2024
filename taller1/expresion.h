#ifndef EXPRESION_H_INCLUDED
#define EXPRESION_H_INCLUDED

#include <stdio.h>
#include "arbol_expresiones.h"

typedef struct {
    int numExpresion;
    arbol abbExpresion;
} expresion;

// BASE
void crear(expresion &e);
void mostrar(expresion e);
void setArbol(expresion &e, arbol root);
void setPrimerNum(expresion &e);
void setNumExp(expresion &e, int i);
int getNumero(expresion e);
arbol getArbol(expresion e);

//GUARDAR Y LEVANTAR
void guardarExpresion(expresion exp, FILE * f);
void levantarExpresion(expresion &exp, FILE * f);

#endif // EXPRESION_H_INCLUDED
