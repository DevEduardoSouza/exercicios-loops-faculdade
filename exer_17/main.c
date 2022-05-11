#include <stdio.h>

int main()
{
    int opcao,num1,num2,soma=0,subtracao=0,multiplicacao=0;
    float divisao=0;

    printf("\n-----------------Calculadora 1.0-----------------\n");
    do
    {
        printf("\nDigite um numero\n");
        scanf("%i",&num1);

        printf("Digite o segundo numero\n");
        scanf("%i",&num2);

        printf("\nDigite o numero corresspondente a sua operacao\n1 - adicao\n2 - subtracao\n3 - multiplicacao\n4 - divisao\n5 - sair\n");
        scanf("%i",&opcao);

        switch (opcao)//Operações matemáticas
        {
        //Soma
        case 1:
         soma = num1 + num2;
         printf(" %i + %i = %i\n",num1,num2,soma);
        break;
        //Subtração
        case 2:
         subtracao = num1 - num2;
         printf(" %i - %i = %i\n",num1,num2,subtracao);
        break;
        //Multiplicação
        case 3:
         multiplicacao = num1 * num2;
         printf(" %i x %i = %i\n",num1,num2,multiplicacao);
        break;
        //Divisão
        case 4:
         divisao = (float)num1 / (float)num2;
         printf("%i / %i = %.2f\n",num1,num2,divisao);
        break;

        case 5:
            printf("\nPrograma encerrado\n");
        break;
        
        default:
         printf("\nOpcao INVALIDA\n");
        break;
        }

        
    } while (opcao!=5);
    
    
    return 0;
}
