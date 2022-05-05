/*
Escreva um programa em C para converter um número decimal em binário.
*/
#include<stdio.h>

int main()
{
    int resultadoDiv=0,binario1,binario0,numeroDecimal;

    printf("\ndigite um numero em decimal para converte em binario\n");
    scanf("%i",&numeroDecimal);
    
    for (int i = 1; i <= 10 ; i++)
    {
        
        
   
       if (numeroDecimal  % 2 == 1)
        {
            binario1 = 1;
            printf("\n%i\n",binario1);

        }else if (numeroDecimal  % 2 != 1){
            binario0 = 0;
            printf("\n%i\n",binario0);
        }
        

        
    }
     
      
        

    return 0;
}
