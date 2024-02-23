#ifndef DATOS_ARBOL_H
#define DATOS_ARBOL_H

#include "tipo_dato.h"
#include "operador.h"

typedef struct {
  tipo_dato disc;
  int numero;
  union {
    char par;
    bool va;
    operador op;
  } info;
} datos;

// Setter
void setNumero(datos &data, int numero); // Función para automatizar el número consecutivo al anterior
void setDiscriminante(datos &data, tipo_dato tipo);

// Getter
tipo_dato getTipo(datos data);
char getParentesis(datos data);
bool getValor(datos data);
operador getOperador(datos data);

// Funciones base
void cargar(datos &data, char dato);
void cargar(datos &data, bool dato);
void cargar(datos &data, operador dato);
void mostrar(datos data);

#endif