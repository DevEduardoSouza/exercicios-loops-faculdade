/*
Faça um algoritmo que calcule e apresente o valor do volume de uma lata de
óleo, utilizando a fórmula VOLUME = 3,14159 * RAIO2
 * ALTURA.

*/
#include<stdio.h>

int main()
{
    float volume, raio, altura;
    printf("Informe ao raio e a altuara da lata de oleo: ");
    scanf("%f %f", &raio, &altura);

    volume = 3.14159 * raio * raio * altura;

    printf("\nO volume da lata de oleo : %.2f",volume);

    return 0;
}
