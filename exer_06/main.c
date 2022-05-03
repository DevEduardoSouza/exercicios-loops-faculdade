/*

Faça um programa que leia um número inteiro positivo e imprima o seu fatorial. Exemplo: 5!=5x4x3x2x1=120.

*/
#include <stdio.h>
int main()
{
    int num=0,
        fat=1;
 
    printf("Digite um numero\n");
    scanf("%i",&num);
    for (int i = 1; i <= num; i++)
    {
     printf(" %i",i);
     fat = fat * i;      
    }
    printf("\nFatorial de %i",num);
    printf("  = %i",fat);
 
    return 0;
}