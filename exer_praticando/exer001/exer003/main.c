#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,quadrado;
    
    for (int i = 1; i <= 5; i++)
    {
        printf("\nDigite um vumero inteiro: ");
        scanf("%i",&num);

        quadrado = num * num; 
        printf("O quadrado do numero %i = %i",num,quadrado);
    }
    
    
    return 0;
}
