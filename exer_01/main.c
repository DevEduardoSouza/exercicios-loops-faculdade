#include <stdio.h>
#include <string.h>

/*  
    Uma  empresa  possui  10  funcionários,  onde  todos  começaram  a   trabalhar  em épocas diferentes . Escreva um  programa que a  partir de  uma lista  digitada com o nome  e  tempo  de  serviço  de  cada  funcionário  (em  meses),  apresente  o funcionário mais novo e o mais antigo da empresa

*/

int main()
{
    int temp, novo=0, velho=0;
    int cont=1;
    char nome[30],nomeVelho[30],nomeNovo[30];
    
    while  ( cont <= 4)
    {
        printf("\nNome do funcionario\n");
        scanf("%s",&nome);
        printf("Tempo de servico em meses\n");
        scanf("%i",&temp);

        if (cont == 1) 
       {
        velho = temp;
        novo = velho;
       }
        if (temp > velho)
        {
            velho=temp;
            strcpy(nomeVelho,nome);
        }
        if (temp < novo )
        {
           novo=temp; 
           strcpy(nomeNovo,nome);
        }
        ++cont;
         
    }    
    printf("\nfuncionario mais velho na empresa: %s com %i meses",nomeVelho,velho);
    printf("\nfuncionario mais novo na empresa: %s com %i meses",nomeNovo,novo);

    return 0;
}
