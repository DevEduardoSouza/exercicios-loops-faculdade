#include <stdio.h>

int main(int argc, char const *argv[])
{
    int valor[6],qtdPar=0;

    for (int i = 0; i < 6; i++)
    {
        printf("Digite um numero: ");
        scanf("%i",&valor[i]);

        if (valor[i] % 2 == 0)
        {
            ++qtdPar;
            printf("\nArmazenado na variavel %i ",i);
        }
    }
  

    printf("\nQuantidades de numeros pares: %i",qtdPar);

 
    
    return 0;
}
