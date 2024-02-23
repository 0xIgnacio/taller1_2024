#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED
#include "boolean.h"
const int MAX = 80;
typedef char * string;
void strcrear (string &s);
void strdesturir (string &s);
// devuelve el largo de un string
int strlar (string s);
//copia 1 string en otro
void strcop (string a,string &b);
// lee un string de pantalla
void scan (string &s);
// concatena 2 strings
void strcon (string &a,string b);
// intercambia 2 strings
void strswp (string &a,string &b);
// imprime un string
void print (string s);
//recibe dos strings y devuelve TRUE si el primero de ellos es menor (en orden
//alfabético) que el segundo, o FALSE en caso contrario.
boolean strmen (string a,string b);
//devuelve un booleano a partir de si los strings son iguales
boolean streq (string a,string b);
#endif // STRING_H_INCLUDED
