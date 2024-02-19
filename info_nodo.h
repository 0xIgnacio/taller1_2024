#ifndef INFO_NODO_H
#define INFO_NODO_H

#include "dato.h"
#include "operador.h"

typedef struct {
  tipo disc;
  int numero;	// Para cargar al árbol al hacer el load
  union {
    char pa;
    bool va;
    operador op;
  } datos;
} datosABB;

// Set atributos
void setDiscriminante(datosABB *data, tipo disc);
void setNumero(datosABB &data, int num);

// Get atributos
void getDiscriminante(datosABB data);
void getNumero(datosABB data);
char getDatoChar(datosABB data);
bool getDatoBool(datosABB data);
operador getDatoOper(datosABB data);

// Cargo union
void cargar(datosABB &data, char pa);
void cargar(datosABB &data, bool va);
void cargar(datosABB &data, operador op);

#endif
