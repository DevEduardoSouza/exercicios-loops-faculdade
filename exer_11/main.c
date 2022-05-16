#include <stdio.h>
#include <math.h>

int main()
{
    int resto=0, binario,produto=0;

    printf("Digite o numero binario: ");
    scanf("%i",&binario);

    for (int i = 0; i <= 9; i++)
    {
        resto = binario % 10;
        produto += resto*pow(2,i);
        binario/=10;
    }
    printf("%i",produto);
    
    return 0;
}
