#include "boolean.h"
#include <stdio.h>

void scan (boolean &b){
int ans;
printf("introduzca 0-falso 1-verdadero: ");
fflush(stdin);
scanf("%d",&ans);
    if(ans==0)
        b=FALSE;
    else
        b=TRUE;
}

void print(boolean b){
    if(b==FALSE)
        printf("FALSE");
    else
        printf("TRUE");
}
