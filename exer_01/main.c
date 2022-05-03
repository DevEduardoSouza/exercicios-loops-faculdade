#include <stdio.h>

/*  
    Uma  empresa  possui  10  funcionários,  onde  todos  começaram  a   trabalhar  em épocas diferentes . Escreva um  programa que a  partir de  uma lista  digitada com o nome  e  tempo  de  serviço  de  cada  funcionário  (em  meses),  apresente  o funcionário mais novo e o mais antigo da empresa

*/

//função principal
int main()
{
    int temp  =0,
        mes   =0,
        novo  =0,
        velho =0;
    char nome[30];


    for (int i = 1; i <= 3; i++)
    {
        printf("\nNome do funcionario\n");
        scanf("%s",&nome);
        printf("Tempo de servico em meses\n");
        scanf("%i",&temp);

        if (temp >= velho)
        {
            velho=temp;
        }

        if ( temp <= novo )
        {
            novo=temp;
        }
        
    
    }    
    printf("\nfuncionario mais velho na empresa %i",velho);
    printf("\nfuncionario mais novo na empresa %i",novo);

    return 0;
}
