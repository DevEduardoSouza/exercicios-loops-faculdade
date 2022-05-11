/*
Escreva um programa em C para converter um número decimal em binário.
*/
#include<stdio.h>

int main()
{
    int resultadoDiv=0,binario1,binario0,numeroDecimal,numeroBinario;

    printf("\ndigite um numero em decimal para converte em binario\n");
    scanf("%i",&numeroDecimal);

     //verificar o resto do primeiro numero
            if (numeroDecimal  % 2 == 0)
            {
                printf("0");
            }else{      
                printf("1");
            }
    
        for (int i = 0; i <= 7; i++)
        {
            resultadoDiv = numeroDecimal / 2 ;
            numeroDecimal= 0 ;
            numeroDecimal = resultadoDiv;
            
        if (resultadoDiv  % 2 == 0)
            {
                printf("0");
            }else{
                printf("1");
            }

        }
    

    return 0;
}
