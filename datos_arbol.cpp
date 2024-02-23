#include "./headers/datos_arbol.h"
#include <stdio.h>

// SETTER
void setNumero(datos &data, int numero) {
  data.numero = numero;
}

void setDiscriminante(datos &data, tipo_dato tipo) {
  data.disc = tipo;
}

// GETTER
tipo_dato getTipo(datos data) {
  return data.disc;
}

char getParentesis(datos data) {
  return data.info.par;
}

bool getValor(datos data) {
  return data.info.va;
}

operador getOperador(datos data) {
  return data.info.op;
}

// BASE
void cargar(datos &data, char dato) {
  data.info.par = dato;
}

void cargar(datos &data, bool dato) {
  data.info.va = dato;
}

void cargar(datos &data, operador dato) {
  data.info.op = dato;
}

void mostrar(datos data) {
  switch (data.disc) {
  case par:
    printf("%c", getParentesis(data));
    break;
  case va:
    printf("%s", getValor(data) ? "true" : "false");
    break;
  case op:
    mostrar(getOperador(data));
    break;
  default:
    printf("Error");
    break;
  }
}