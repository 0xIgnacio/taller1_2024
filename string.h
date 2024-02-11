#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED

#include "boolean.h"
#include <stdio.h>

const int MAX = 80;
typedef char *string;

void strcrear(string &s);
void strdestruir(string &s);
int strlar(string s);
void strcop(string &s1, string s2);
void scan(string &s);
void strcon(string &s1, string s2);
void strswp(string &s1, string &s2);
void print(string s);
bool strmen(string s1, string s2);
bool streq(string s1, string s2);

// Archivos
void bajar(string s, FILE *a);
void levantar(string &s, FILE *a);

#endif
