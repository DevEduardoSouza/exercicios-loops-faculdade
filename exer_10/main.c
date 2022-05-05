/*
Escreva um programa em C para converter um número decimal em binário.
*/
#include<stdio.h>

int main()
{
    int numeroDecimal,resultadoDiv=0,binario1;
    
    
    do
    {
        
        printf("digite um numero em decimal para converte em binario\n");
        scanf("%i",&numeroDecimal);
        resultadoDiv = numeroDecimal / 2;
        if (numeroDecimal  % 2 == 0)
        {
            binario1 = 1;
            printf("%i",binario1);
        }
        printf("%i",resultadoDiv);
    } while (numeroDecimal=!1);
        
  
    return 0;
}
