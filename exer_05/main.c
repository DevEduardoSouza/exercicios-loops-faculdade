/*

Faça um programa que exiba a sequencia completa abaixo:
0/100, 2/96, 4/92, 6/88, .....50/0 

*/
#include <stdio.h>

int main()
{ 
    int baixo = 104;
    for (int i = 0; i <= 50; i+=2)
    {
        baixo = baixo - 4;
        printf(" %i/%i, ", i,baixo);
    }
   
    return 0;
}
