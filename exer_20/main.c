#include<stdio.h>

int main()
{
    int num,somaNumeros=0,quantidadeNum=0,maiorNum=0,menorNum=0,qtapar=0,somapares=0;
    float cont = 1,mdnumeros=0,mdpares=0;
    
    do
    {
       printf("Digite um numero ou digite 0 para encerrar o programa\n");
       scanf("%i",&num);

       //Soma de todos os números digitados
       somaNumeros = somaNumeros + num;

       //Quantidade de números digitados
       quantidadeNum = quantidadeNum + 1;
    
       
       //Verifica se é o primeiro número digitado e define o valor das variáveis maior e menor igual ao número
       if (cont == 1) 
       {
        maiorNum = num;
        menorNum = maiorNum;
       }
       else if (num > maiorNum)//Verificar número maior
       { 
        maiorNum=num;  
       }
       else if (num < menorNum && num!=0)//verificar menor número
       {
           menorNum=num;
       }

       //Quantidade de pares
       if (num % 2 == 0 && num!=0)
       {
           qtapar++;
           somapares = somapares + num;//Soma dos pares
           mdpares = ((float)somapares / (float)qtapar);//Média dos pares
       }
       cont++;

    } while (num!=0);

    //removendo o 0 para quando for encerrado o programa para nao soma a quantidade
    quantidadeNum = quantidadeNum-1;
    //Média de números digitados
    mdnumeros = ((float)somaNumeros / (float)quantidadeNum);//transformar um int em um float para ter o resultado preciso

    printf("\nSoma dos numeros digitados:%i\nQuantidade de numeros digitados:%i\nmedia dos numeros digitados:%.2f\nMaior numero digitado:%i\nMenor numero digitado:%i\nMedia dos numeros pares:%.2f",somaNumeros,quantidadeNum,mdnumeros,maiorNum,menorNum,mdpares);
    
    return 0;
}
