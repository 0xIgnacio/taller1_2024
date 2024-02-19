#ifndef TIPO_DATO_H
#define TIPO_DATO_H

typedef enum {parentesis, valor, operador} tipo_dato;

// Funciones verificadoras
bool esParentesis(tipo_dato data);
bool esValor(tipo_dato data);
bool esOperador(tipo_dato data);

#endif