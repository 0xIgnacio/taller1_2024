#include "requerimientos.h"
#include "expresion.h"
#include "lista_expresion.h"
#include "lista_string.h"
#include "string.h"
#include <cstdio>

void atomic(listaString comando, listaExpresiones &exp, int num) {
	if (largo(comando) == 2) {
		comando = comando->sig;
		if (streq(comando->data, string("true"))
		|| streq(comando->data, string("false"))) {
			// Creo el dato
			datosABB nuevoDato;
			setDiscriminante(&nuevoDato, val);
			if (streq(comando->data, string("true")))
				cargar(nuevoDato, true);
			else cargar(nuevoDato, false);

			// Creo el arbol y le doy el dato
			abbExpresion nuevoArbol;
			insertarAtomic(nuevoArbol, nuevoDato);

			// Creo la expresión con el árbol
			expresion nuevaExpresion;
			crear(nuevaExpresion, num, nuevoArbol);

			// Inserto la expresión en la lista
			insertar(exp, nuevaExpresion);
		} else printf("Error: segundo parámetro no es un booleano");
	} else printf("Error: exceso de parametros");
}

void compound(listaString comando, listaExpresiones &exp) {

}

void show(listaString comando, listaExpresiones exp) {

}

void evaluate(listaString comando, listaExpresiones exp) {

}

void save(listaString comando, listaExpresiones &exp) {

}

void load(listaString comando, listaExpresiones &exp) {

}

void exit(listaString comando, listaExpresiones &exp) {

}
