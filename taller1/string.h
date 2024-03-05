#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED

#include <stdio.h>
#include "boolean.h"

const int MAX = 80;
typedef char * string;

// BASE
void strcrear(string &s);
void strdestruir(string &s);
int strlar(string s);
void strcop(string &s1, string s2);
void scan(string &s);
void strcon(string &s1, string s2);
void strswp(string &s1, string &s2);
void print(string s);
boolean strmen(string s1, string s2);
boolean streq(string s1, string s2);

// REQUERIMIENTOS
char reconocerComando(string lStr);
void mayusMinus(string &str);
boolean esMayus(string str);
char reconocerOperador(string palabra);
boolean stringToBoolean(string s);
void charToString(char c, string &s);
void booleanToString(boolean b, string &s);
int stringToInt(string s);
boolean validarBool(string s);
boolean validarFormatoArchivo(string s);
boolean validarEntero(string s);
boolean esNumero(string s);
boolean esLetra(char c);
char obtenerRespuestaValida(char &c);

#endif // STRING_H_INCLUDED
