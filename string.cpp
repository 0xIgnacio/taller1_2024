#include <stdio.h>
#include "string.h"
void strcrear (string &s){
    s=new char[1];
    s[0]='\0';
}
void strdesturir (string &s){
    delete [] s;
    s=NULL;
}
int strlar (string s){
int i=0;
    while(s[i]!='\0')
        i++;
return i;
}
void strcop (string a,string &b){
    int i=0;
    b=new char[strlar(a)];
    while(a[i]!='\0'){
        b[i]=a[i];
        i++;
    }
    b[i]='\0';
}
void scan (string &s){
int i=0;
string aux;
char c;
aux=new char[MAX];
scanf("%c",&c);
	while(i<MAX-1 && c!='\n'){
		aux[i]=c;
		i++;
		scanf("%c",&c);
	}
	aux[i]='\0';
strcop(aux,s);
strdesturir(aux);
}
void strcon (string &a,string b){
string aux;
int concatenados=strlar(a)+strlar(b);
int i,j,largo;
if (concatenados < MAX){
    aux=new char[concatenados+1];
    largo=concatenados+1;
    }
else{
    aux=new char[MAX];
    largo=MAX;
}
i=0;
while(a[i]!='\0'){
    aux[i]=a[i];
    i++;
}
j=0;
while(b[j]!='\0' && i<largo){
    aux[i]=b[j];
    i++;
    j++;
}
aux[i]='\0';
strcop(aux,a);
strdesturir(aux);
}
void strswp (string &a,string &b){
string aux;
strcrear(aux);
strcop(a,aux);
strcop(b,a);
strcop(aux,b);
strdesturir(aux);
}
void print (string s){
int i=0;
    while(s[i]!='\0'){
        printf("%c",s[i]);
        i++;
    }
}
boolean strmen (string a,string b){
	int i=0;
	boolean menor=TRUE,termine=FALSE;
	while(a[i]!='\0' && b[i]!='\0' && !termine){
		if(a[i]<b[i])
			termine=TRUE;
		else{
			menor=FALSE;
			termine=TRUE;
		}
		if(a[i]==b[i])
			i++;
		}
	return menor;
}
boolean streq (string a,string b){
	boolean igual=TRUE;
	int i=0;
	while(a[i]!='\0' && b[i]!='\0' && igual){
		if (a[i]!=b[i])
			igual=FALSE;
		else
			i++;
	}
	if(igual && (a[i]!='\0' || b[i]!='\0'))
        igual=FALSE;

	return igual;
}
