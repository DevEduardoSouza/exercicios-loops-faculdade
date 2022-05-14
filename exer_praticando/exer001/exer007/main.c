/*

Faça um algoritmo que:
a) Leia um número inteiro;
b) Leia um segundo número inteiro;
c) Efetue a adição dos dois valores;
d) Apresente o valor calculado. 

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, soma;

    printf("Digite um numero interio: ");
    scanf("%i",&num1);
    printf("Digite outro um numero interio: ");
    scanf("%i",&num2);

    soma = num1 + num2;

    printf("A soma dos dois numeros e : %i",soma);

    return 0;
}


