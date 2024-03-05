#include <stdio.h>
#include "info_arbol.h"

// BASE
void setParentesis(dato_abb &data, char parentesis) {
    setDiscriminante(data, PARENTESIS);
    data.numero = 0;
    data.datos.par = parentesis;
}

void setNumero(dato_abb &data, int i) {
    data.numero = i;
}

void setValor(dato_abb &data, boolean b) {
    setDiscriminante(data, VALOR);
    data.numero = 0;
    data.datos.v = b;
}

void setNot(dato_abb &data) {
    setDiscriminante(data, OPERADOR);
    data.numero = 0;
    data.datos.op = 'N';
}

void setOr(dato_abb &data) {
    setDiscriminante(data, OPERADOR);
    data.numero = 0;
    data.datos.op = 'O';
}

void setAnd(dato_abb &data) {
    setDiscriminante(data, OPERADOR);
    data.numero = 0;
    data.datos.op = 'A';
}

void setDiscriminante(dato_abb &data, tipo_dato tipo) {
    data.discriminante = tipo;
}

tipo_dato getDiscriminante(dato_abb data) {
    return data.discriminante;
}

int getNumero(dato_abb data) {
    return data.numero;
}

char getOperador(dato_abb data) {
    return data.datos.op;
}
boolean getDatoBool(dato_abb data) {
    return (data.discriminante == VALOR) ? data.datos.v : FALSE;
}

char getParentesis(dato_abb data) {
    return data.datos.par;
}

char getDatoChar(dato_abb data) {
    return (data.discriminante == PARENTESIS) ? data.datos.par : data.datos.op;
}

void mostrar(dato_abb data) {
    printf(" ");
    if (getDiscriminante(data) == OPERADOR)
        mostrarOperador(data);
    else if (getDiscriminante(data) == VALOR)
        mostrarValor(data);
    else mostrarPar(data);
}

void mostrarValor(dato_abb data) {
    boolean b = getDatoBool(data);
    if (b == TRUE)
        printf("TRUE");
    else printf("FALSE");
}

void mostrarOperador(dato_abb data) {
    switch (data.datos.op) {
        case 'A':
                printf("AND");
            break;
        case 'N':
                printf("NOT");
            break;
        case 'O':
                printf("OR");
            break;
    }
}

void mostrarPar(dato_abb data) {
    if (data.datos.par == '(')
        printf("(");
    else printf(")");
}

void mostrarDiscriminante(dato_abb data) {
    if (data.discriminante == VALOR)
        printf("\nEs un valor");
    else if (data.discriminante == OPERADOR)
        printf("\nEs un OPERADOR");
    else if (data.discriminante == PARENTESIS)
        printf("\nEs un Parentesis");
    else printf("\nError");
}

// ARCHIVO
void guardarNodo(dato_abb data, FILE *f){
    fwrite(&data.numero, sizeof(int), 1, f);
    fwrite(&data.discriminante, sizeof(tipo_dato), 1, f);
    switch (data.discriminante){
        case OPERADOR:
                fwrite(&data.datos.op, sizeof(char), 1, f);
            break;
        case VALOR:
                fwrite(&data.datos.v, sizeof(bool), 1, f);
            break;
        case PARENTESIS:
                fwrite(&data.datos.par, sizeof(char), 1, f);
            break;
    }
}

void levantarNodo(dato_abb &data, FILE *f){
    fread(&data.numero, sizeof(int), 1, f);
    fread(&data.discriminante, sizeof(tipo_dato), 1, f);
    switch (data.discriminante) {
        case OPERADOR:
                fread(&data.datos.op, sizeof(char), 1, f);
            break;
        case VALOR:
                fread(&data.datos.v, sizeof(bool), 1, f);
            break;
        case PARENTESIS:
                fread(&data.datos.par, sizeof(char), 1, f);
            break;
    }
}
