#include <stdio.h>

int main()
{
    int opcao,num1,num2,soma=0,subtracao=0,multiplicacao=0,divisao=0;

    printf("\n-----------------Calculadora 1.0-----------------\n");
    do
    {
        printf("\nDigite um numero\n");
        scanf("%i",&num1);

        printf("Digite o segundo numero\n");
        scanf("%i",&num2);

        printf("\nDigite o numero corresspondente a sua operacao\n1 - adicao\n2 - subtracao\n3 - multiplicacao\n4 - divisao\n5 - sair\n");
        scanf("%i",&opcao);

        switch (opcao)
        {
        case 1:
         soma = num1 + num2;
         printf(" %i + %i = %i\n",num1,num2,soma);
        break;

        case 2:
         subtracao = num1 - num2;
         printf(" %i - %i = %i\n",num1,num2,subtracao);
        break;

        case 3:
         multiplicacao = num1 * num2;
         printf(" %i x %i = %i\n",num1,num2,multiplicacao);
        break;

        case 4:
         divisao = num1 / num2;
         printf(" %i / %i = %i\n",num1,num2,divisao);
        break;

        case 5:
        break;
        
        default:
         printf("\nOpcao INVALIDA\n");
        break;
        }

        
    } while (opcao!=5);
    
    
    return 0;
}
