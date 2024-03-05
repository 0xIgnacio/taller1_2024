#include <stdio.h>
#include "expresion.h"

// BASE
void crear(expresion &e) {
    e.numExpresion = 0;
    e.abbExpresion = nullptr;
}

void mostrar(expresion e) {
    printf("Expresion %d:", getNumero(e));
    mostrar(e.abbExpresion);
}

void setArbol(expresion &e, arbol root) {
    e.abbExpresion = root;
}

void setPrimerNum(expresion &e) {
    e.numExpresion = 1;
}
void setNumExp(expresion &e, int i) {
    e.numExpresion = i;
}

int getNumero(expresion e) {
    return e.numExpresion;
}

arbol getArbol(expresion e) {
    return e.abbExpresion;
}

//GUARDAR Y LEVANTAR
void guardarExpresion(expresion exp, FILE * f) {
    guardarArbol(getArbol(exp), f);
}
void levantarExpresion(expresion &exp, FILE * f) {
    levantarArbol(exp.abbExpresion, f);
}
