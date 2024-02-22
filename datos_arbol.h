#ifndef DATOS_ARBOL_H
#define DATOS_ARBOL_H

#include "tipo_dato.h"
#include "operador.h"

typedef struct datos {
  tipo_dato disc;
  int numero;
  union info {
    char par;
    bool va;
    operador op;
  };
};

// Setter
void setNumero(datos &data, int numero); // Función para automatizar el número consecutivo al anterior

// Getter
tipo_dato getTipo(datos data);
bool getValor(datos data);
char getParentesis(datos data);
operador getOperador(datos data);

// Funciones base
void cargar(datos &data, string dato);
void mostrar(datos data);

#endif