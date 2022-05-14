/*
Faça um algoritmo que leia uma temperatura em Fahrenheit e a apresente
convertida em graus Celsius. A fórmula de conversão é C = (F – 32) * ( 5 / 9), na
qual F é a temperatura em Fahrenheit e C é a temperatura em Celcius. 

*/
#include <stdio.h>
#include <stdlib.h>


int main()
{
    float f, c=0;

    printf("Informe a temperatura em fahrebheit: ");
    scanf("%f",&f);

    c = (f - 32.0) * 5.0 / 9.0;

    printf("\nA temperatura convertida para graus Celsius %.2f",c);

    return 0;
}
