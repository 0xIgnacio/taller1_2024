#include "info_nodo.h"

// Set atributos
void setDiscriminante(datosABB *data, tipo disc) {
	data->disc = disc;
}

void setNumero(datosABB &data, int num) {
	data.numero = num;
}

void cargar(datosABB &data, char pa) {
	data.datos.pa = pa;
}

void cargar(datosABB &data, bool va) {
	data.datos.va = va;
}

void cargar(datosABB &data, operador op) {
	data.datos.op = op;
}
