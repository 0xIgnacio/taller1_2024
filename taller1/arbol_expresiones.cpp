#include <stdio.h>
#include "arbol_expresiones.h"

// AUXILIARES
void numerarAux(arbol root, int &contador) {
    if (!esVacio(root)) {
        numerarAux(root->left, contador); // Busco hoja izquierda
        setNumero(root->data, contador); // Seteo el número
        contador++;
        numerarAux(root->right, contador);
    }
}

void colocarParIzq(arbol root) {
    if (!esVacio(root))
        if (root->left != nullptr)
            colocarParIzq(root->left); // Busco hoja izquierda
        else {
            root->left = new nodoA;
            setParentesis(root->left->data, '('); // Seteo el paréntesis
            root->left->left = nullptr;
            root->left->right = nullptr;
        }
}

void colocarParDer(arbol root) {
    if (!esVacio(root))
        if (root->right != nullptr)
            colocarParDer(root->right); // Busco hoja derecha
        else {
            root->right = new nodoA;
            setParentesis(root->right->data,')'); // Seteo el paréntesis
            root->right->left = nullptr;
            root->right->right = nullptr;
        }
}

void insertarNodoAux(arbol root, nodoA * nuevo) {
    if (getNumero(nuevo->data) < getNumero(root->data)) // Si el número del nuevo es menor al de la raíz ... 
        if (esVacio(root->left)) // ... y la raíz es la información menor
            root->left = nuevo;
        else insertarNodoAux(root->left, nuevo);
    else if (getNumero(nuevo->data) > getNumero(root->data)) // Si el número del nuevo es menor al de la raíz ...
        if (esVacio(root->right)) // ... y la raíz es la información mayor
            root->right = nuevo;
        else insertarNodoAux(root->right, nuevo);
}

// REQUERIMIENTOS
void crear(arbol &root) {
    root = nullptr; // Inicializo nulo
}

void destruir(arbol &root) {
    if (!esVacio(root)) {
        destruir(root->left); // Destruyo sub-arbol izquierdo
        destruir(root->right); // Destruyo sub-arbol izquierdo
        delete root; // Destruyo raíz
        root = nullptr; // Buena costumbre al eliminar dejar nulo
    }
}

boolean esVacio(arbol root) {
    return (boolean) (root == nullptr); // Casteo porque tengo modulo boolean hecho a mano
}

void mostrar(arbol root) {
    if (!esVacio(root)) {
        mostrar(root->left); // Busco hoja izquierda
        mostrar(root->data); // Muestro nodo
        mostrar(root->right); // Busco hoja derecha
    }
}

arbol getRaiz(arbol root) {
    return root;
}

arbol getHijoIzq(arbol root) {
    return root->left;
}

arbol getHijoDer(arbol root) {
    return root->right;
}

dato_abb getInfo(arbol root) {
    return root->data;
}

// REQUERIMIENTOS
void numerarArbol(arbol &root) {
    int contador = 1;
    numerarAux(root, contador); // Llamo auxiliar recursiva
}

void colocarParentesis(arbol &root) {
    colocarParIzq(root); // Auxiliar recursiva para colocar izquierdo
    colocarParDer(root); // Auxiliar recursiva para colocar derecho
}

boolean evaluar(arbol root) {
    if (getDiscriminante(getInfo(root)) == VALOR) // Si es un valor lo retorno
        return getDatoBool(getInfo(root));
    else if (getDiscriminante(getInfo(root)) == OPERADOR) // Si es operador ...
        if (getOperador(getInfo(root)) == 'A')
            return (boolean) (evaluar(root->left) && evaluar(root->right)); // ... AND, devuelvo sub-arbol izquierdo AND sub-arbol derecho
        else if (getOperador(getInfo(root)) == 'O')
            return (boolean) (evaluar(root->left) || evaluar(root->right)); // ... OR, devuelvo sub-arbol izquierdo OR sub-arbol derecho
        else return (boolean) !evaluar(root->right); // ... NOT, devuelvo sub-arbol izquierdo NOT sub-arbol derecho
    return FALSE;
}

arbol clonar(arbol root) { // Función de clonación para nuevas expresiones en compound
    if (esVacio(root)) // Si es vacío simplemente devuelvo un vacío
        return nullptr;
    else {
        arbol nuevo = new nodoA;
        nuevo->data = root->data; // Clono datos del nodo raíz
        nuevo->left = clonar(root->left); // Clono recursivamente sub-arbol izquierdo
        nuevo->right = clonar(root->right); // Clono recursivamente sub-arbol derecho
        return nuevo;
    }
}

void insertarNodo(arbol &root, dato_abb nuevo) {
    nodoA * nNuevo = new nodoA;
    nNuevo->data = nuevo;
    nNuevo->left = nullptr;
    nNuevo->right = nullptr;

    if (esVacio(root)) // Si la raíz es vacía creo uno nuevo
        root = nNuevo;
    else insertarNodoAux(root, nNuevo);
}

void insertarRaiz(arbol izq, arbol der, dato_abb data, arbol &root) {
    root = new nodoA; // Creo la nueva raíz
    root->data = data;
    root->left = izq; // Le doy sub-arbol izquierdo
    root->right = der; // Y también sub-arbol derecho
    colocarParentesis(root);
}

//CARGAR
void cargarArbolAtomic(arbol &root, string s) {
    root = new nodoA;
    setValor(root->data, stringToBoolean(s));
    root->right = nullptr;
    root->left = nullptr;
}

void cargarArbolNot(arbol &root, arbol abb) {
    root = new nodoA;
    setNot(root->data);
    root->right = abb;
    root->left = nullptr;
    colocarParentesis(root);
}

//GUARDAR Y LEVANTAR
void guardarArbol(arbol root, FILE * f) {
    if (!esVacio(root)) {
        guardarNodo(root->data, f);
        guardarArbol(root->left, f);
        guardarArbol(root->right, f);
    }
}

void levantarArbol(arbol &root, FILE *f) {
    dato_abb data;
    levantarNodo(data, f);
    while (!feof(f)) {
        insertarNodo(root, data);
        levantarNodo(data, f);
    }
}
