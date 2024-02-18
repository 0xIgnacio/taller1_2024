#include "lista_expresion.h"
#include "expresion.h"


void crear(listaExpresiones &root) {
	root = nullptr;
}

void destruir(listaExpresiones &root) {
	if (root != nullptr) {
		destruir(root->sig);

	}
}

void insertar(listaExpresiones &root, expresion data);

nodoE * buscar(listaExpresiones root, expresion data);

void largo(listaExpresiones root);

void esVacia(listaExpresiones root);

void setData(nodoE *root, expresion data) {
	root->data = data;
}

expresion getData(nodoE *root) {
	return root->data;
}
