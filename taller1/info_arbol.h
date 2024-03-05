#ifndef DATOSARBOL_H_INCLUDED
#define DATOSARBOL_H_INCLUDED

#include <stdio.h>
#include "tipo_dato.h"
#include "string.h"

typedef struct {
    tipo_dato discriminante;
    int numero;
    union {
        boolean v;
        char op;
        char par;
    } datos;
} dato_abb;

// BASE
void setParentesis(dato_abb &data, char parentesis);
void setNumero(dato_abb &data, int i);
void setValor(dato_abb &data, boolean b);
void setNot(dato_abb &data);
void setOr(dato_abb &data);
void setAnd(dato_abb &data);
void setDiscriminante(dato_abb &data, tipo_dato tipo);

tipo_dato getDiscriminante(dato_abb data);
int getNumero(dato_abb data);
char getOperador(dato_abb data);
boolean getDatoBool(dato_abb data);
char getParentesis(dato_abb data);
char getDatoChar(dato_abb data);

void mostrar(dato_abb data);
void mostrarValor(dato_abb data);
void mostrarOperador(dato_abb data);
void mostrarPar(dato_abb data);
void mostrarDiscriminante(dato_abb data);

// ARCHIVO
void guardarNodo(dato_abb data, FILE * f);
void levantarNodo(dato_abb &data, FILE * f);

#endif // DATOSARBOL_H_INCLUDED
