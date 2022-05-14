/*
Faça um algoritmo que leia uma temperatura em graus Celsius e apresente-a
convertida em graus Fahrenheit. A fórmula de conversão é: F = (9 * C + 160) / 5,
na qual F é a temperatura em Fahrenheit e C é a temperatura em Celsius;

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  f, c ;

    printf("Informe a temperatura em graus Celsius: ");
    scanf("%i",&c);

    f = (9 * c) + 160 / 5;

    printf("\nA temperatuara em graus Fahrenheit: %i",f);

    return 0;
}
