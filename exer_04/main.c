/*
 Escreva uma programa de compras em que o usuário insira o código de cada produto comprado e a quantidade. Seu programa deverá calcular o valor comprado de cada produto seguindo a tabela abaixo. Após inserir os dados do produto o sistema deverá perguntar se o mesmo deseja inserir mais produtos (S-sim ou N – não).  Ao finalizar a entrada de cada produto o sistema deverá calcular o valor total da compra.     Em seguida informe ao usuário 3 opções de pagamento: 1 - A vista com desconto de 10%, 2 - A prazo (neste caso solicite ao usuário o número de parcelas), 3 - no crediário com um acréscimo de 5% (solicite também que o usuário digite o número de parcelas). Ao final informe ao usuário o valor total. Caso tenha escolhido a forma de pagamento 2 ou 3 informes o número de parcelas, o valor de cada parcela e o valor total da compra. Lembre de calcular adicionar 5% ao total da compra caso o usuário escolar a forma de pagamento número 3 após. Do mesmo modo aplique o desconto de 10% caso opte pelo pagamento a Vista.
*/
#include<stdio.h>

int main()
{
    int codigoProduto, qtdProduto,formasPag,qtaParcelas;

    float pagaVista=0,pagaVista2,pagaAcrescimo,pagaAcrescimo2;
    float produto,valorProduto,totalCompra=0,precoParcela;
    char opcao;
    
    do
    {
        //
        printf("\nDigite o codigo do produto\n");
        scanf("%i",&codigoProduto);
        printf("A quantidade desse produto\n");
        scanf("%i",&qtdProduto);

        switch (codigoProduto)//
        {
        case 1200:
            produto = 5.0;
            valorProduto = produto * qtdProduto;
        break;

        case 1300:
            produto = 6.3;
            valorProduto = produto * qtdProduto;
        break;

        case 1400:
            produto = 4.25;
            valorProduto = produto * qtdProduto;
        break;

        case 1500:
            produto = 5.50;
            valorProduto = produto * qtdProduto;
        break;

        case 1600: 
            produto = 1.00;
            valorProduto = produto * qtdProduto;
        break;

        case 1700:
            produto = 7.00;
            valorProduto = produto * qtdProduto;
        break;
            
        case 1800:
            produto = 3.19;
            valorProduto = produto * qtdProduto;
        break;

        case 1900:
            produto = 9.30;
            valorProduto = produto * qtdProduto;
        break;

        case 2000:
            produto = 8.80;
            valorProduto = produto * qtdProduto;
        break;

        case 2100:
            produto = 6.70;
            valorProduto = produto * qtdProduto;
        break;

        case 2200:
            produto = 30.00;
            valorProduto = produto * qtdProduto;
        break;

        case 2300:
            produto = 2.45;
            valorProduto = produto * qtdProduto;
        break;

        case 2400:
            produto = 2.00;
            valorProduto = produto * qtdProduto;
        break;

        case 2500:
            produto = 21.00;
            valorProduto = produto * qtdProduto;
        break;

        case 2600:
            produto = 4.55;
            valorProduto = produto * qtdProduto;
        break;

        case 2700:
            produto = 0.32;
            valorProduto = produto * qtdProduto;
        break;

        case 2800:
            produto = 3.40;
            valorProduto = produto * qtdProduto;
        break;

        case 2900:
            produto = 12.40;
            valorProduto = produto * qtdProduto;
        break;

        case 3000:
            produto = 35.00;
            valorProduto = produto * qtdProduto;
        break;

        case 3100:
            produto = 2.33;
            valorProduto = produto * qtdProduto;
        break;

        case 3200:
            produto = 15.00;
            valorProduto = produto * qtdProduto;
        break;

        case 3300:
            produto = 5.60;
            valorProduto = produto * qtdProduto;
        break;

        case 3400:
            produto = 13.21;
            valorProduto = produto * qtdProduto;
        break;

        case 3500:
            produto = 23.00;
            valorProduto = produto * qtdProduto;
        break;

        case 3600:
            produto = 2.45;
            valorProduto = produto * qtdProduto;
        break;
    
        default:
            printf("Codigo do produto INVALIDO\n");
        break;
        }

        totalCompra = totalCompra + valorProduto;

        printf("Deseja enserir mais produto (S - sim ou N -nao)\n");
        scanf("%s",&opcao);

        switch (opcao)
        {
        case 'S':
        case 's':
        break;

        case 'N': 
        case 'n':
           printf("\nCompra Encerrada\n");
        break;
        
        default:
            printf("\nOpcao INVALIDA");
        break;
        } 
    } while (opcao!='n');

    printf("\nValor total da sua compra: %.2f R$\n",totalCompra);

    printf("\n\tFormas de pagamento\n1 - A vista com desconto de 10%%\n2 - A prazo\n3 - No crediario com acrescimo de 5%%\n");
    scanf("%i",&formasPag);

    switch (formasPag)
    {
    case 1:
        pagaVista = totalCompra * 0.10;
        pagaVista2 = totalCompra - pagaVista;
        printf("\nNovo valor ja descontado %.2f R$",pagaVista2);
    break;

    case 2:
         printf("Digite o total de parcelas\n");
         scanf("%i",&qtaParcelas);
         precoParcela = totalCompra / qtaParcelas;
         printf("Total de parcelas %i, preco por pacela %.2f R$",qtaParcelas,precoParcela);
    break;

    case 3:
        pagaAcrescimo = totalCompra * 0.05;
        pagaAcrescimo2 = totalCompra + pagaAcrescimo;

        printf("Digite o total de parcelas\n");
        scanf("%i",&qtaParcelas);

        precoParcela = pagaAcrescimo2 / qtaParcelas;

        printf("\nNovo valor com acrescimo %.2f R$, preco por pacela %.2f R$",pagaAcrescimo2,precoParcela);
    break;
    
    default:
        printf("\nOpcao Invalida\n");
        break;
    }

    return 0;
}

