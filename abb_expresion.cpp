#include "abb_expresion.h"
#include "dato.h"
#include "info_nodo.h"

void insertarParentesisIzqAux(abbExpresion abb, nodoA * nuevo) {
	if (abb->i == nullptr) {
		abb->i = nuevo;
	} else insertarParentesisIzqAux(abb->i, nuevo);
}

void insertarParentesisDerAux(abbExpresion abb, nodoA * nuevo) {
	if (abb->d == nullptr) {
		abb->d = nuevo;
	} else insertarParentesisDerAux(abb->d, nuevo);
}

void crear(abbExpresion &abb) {
	abb = nullptr;
}

void destruir(abbExpresion &abb) {

}

void insertarAtomic(abbExpresion &abb, datosABB data) {
	nodoA * nuevo = new nodoA;
	nuevo->data = data;
	nuevo->i = nullptr;
	nuevo->d = nullptr;
	abb = nuevo;
	insertarParentesisDer(abb);
	insertarParentesisIzq(abb);
}



datosABB * getDatos(abbExpresion abb) {
	return &abb->data;
}

void insertarParentesisIzq(abbExpresion abb) {
	nodoA * nuevo = new nodoA;
	nuevo->d = nullptr;
	nuevo->i = nullptr;
	datosABB * data = getDatos(abb); // Obtengo los datos
	setDiscriminante(data, par);
	cargar(*data, '(');
	insertarParentesisIzqAux(abb, nuevo);
}

void insertarParentesisDer(abbExpresion abb) {
	nodoA * nuevo = new nodoA;
	nuevo->d = nullptr;
	nuevo->i = nullptr;
	datosABB * data = getDatos(abb); // Obtengo los datos
	setDiscriminante(data, par);
	cargar(*data, ')');
	insertarParentesisDerAux(abb, nuevo);
}
