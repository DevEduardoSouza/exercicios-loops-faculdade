#include <stdio.h>

int main()
{
    int id,valor,percentualAumento,qtdProdutos=0,qtdProdutoszero=0,somaProdtuosZero=0;
    float novoValorPercen=0,valorAumento=0,novoValor=0,mdProdutosZero=0,valorMaior=0;
    do
    {
        printf("\nDigite o ID do produto:");
        scanf(" %i",&id);
        printf("\nDigite o valor do produto:");
        scanf(" %i",&valor);
        printf("\nInforme o percentual de aumento(sem o %%):");
        scanf(" %i",&percentualAumento);

        novoValorPercen = percentualAumento / 100.0;
        novoValor = valor * novoValorPercen;
        valorAumento = valor + novoValor;

        printf("O novo valor do produto  com %i%% de aumento: R$ %.2f  \n",percentualAumento,valorAumento);

        if ( percentualAumento >5 && valorAumento > 100 )
        {
            qtdProdutos = qtdProdutos + 1;
        }

        if (percentualAumento == 0)
        {
            qtdProdutoszero = qtdProdutoszero + 1;
            somaProdtuosZero = somaProdtuosZero + valor;  
        }

        if (valorAumento >= valorMaior)
        {
            valorMaior = valorAumento;
        }
        
          
    } while (id!=0);


    printf("\nQuantidade de produtos mais caro que R$ 100.00(apos aumento) e que tiveram aumento superior a 5%%: %i\n",qtdProdutoszero);

    qtdProdutoszero -=1;
    mdProdutosZero = somaProdtuosZero / qtdProdutoszero;
    printf("A media de valor de produtos que nao sofreram aumento: %.2f\n",mdProdutosZero);

    printf("Valor do produto mais caro (apos aumento): R$ %.2f",valorMaior);

 
    return 0;
}

