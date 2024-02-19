#include "lista_expresion.h"
#include "expresion.h"

// Auxiliares
void insertarAux(listaExpresiones root, nodoE * nuevo) {
	if (root->sig == nullptr) {
		root->sig = nuevo;
	} else insertarAux(root->sig, nuevo);
}

void crear(listaExpresiones &root) {
	root = nullptr;
}

void destruir(listaExpresiones &root) {
	if (root != nullptr) {
		destruir(root->sig);

	}
}

void insertar(listaExpresiones &root, expresion data) {
	nodoE * nuevo = new nodoE;
	nuevo->data = data;
	nuevo->sig = nullptr;

	if (root == nullptr) {
		root = nuevo;
	} else insertarAux(root, data);
}

nodoE * buscar(listaExpresiones root, expresion data);

void largo(listaExpresiones root);

void esVacia(listaExpresiones root);

void setData(nodoE *root, expresion data) {
	root->data = data;
}

expresion getData(nodoE *root) {
	return root->data;
}
