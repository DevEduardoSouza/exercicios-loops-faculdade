/*
Faça um algoritmo que converta uma velocidade expressa em km/h para m/s e vice versa. Você deve criar um menu com as duas opções de conversa ̃o e com uma opção para finalizar o programa. O usuário poderá fazer quantas converso ̃es desejar, sendo que o programa só será finalizado quando a opção de finalizar for escolhida.

*/

#include <stdio.h>

int main()
{

int opcao;
float velocidade,resultadoVelo;

    printf("Convercao de velocidade\n");
do
{ 
    printf("\nEscolha a opcao\n1 - km/h para m/s\n2 - m/s para km/h\n3 - encerrar o programa\n");
    scanf("%i",&opcao);

    switch (opcao)//Pedir a velocidade para o usuario e calcular
    {

    //km/h para m/s / 3.6
    case 1:
    printf("\nDigite a velocidade em (km/h)\n");
    scanf("%f",&velocidade);
    resultadoVelo = velocidade/3.60;
    printf("Convercao de km/h para m/s: %.3fm/s\n",resultadoVelo);
    break;

    // m/s para km/h  * 3.6
    case 2:
    printf("\nDigite a velocidade em (m/s)\n");
    scanf("%f",&velocidade);
    resultadoVelo = velocidade * 3.60;
    printf("Convercao de m/s para km/h: %.3fkm/h\n",resultadoVelo);
    break;

    //Encerrar o programa
    case 3:
        printf("\nPrograma encerrado com sucesso\n");
    break;
    
    default:
            printf("\nOPCAO INVALIDA\n");
    break;
    }

} while (opcao!=3);

    return 0;
}

