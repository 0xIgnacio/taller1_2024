#include "info_nodo.h"

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
