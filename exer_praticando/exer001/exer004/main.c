/*

Faça um algoritmo para calcular a área de uma circunferência, considerando a
fórmula ÁREA = π * RAIO2
. Utilize as variáveis AREA e RAIO, a constante π (pi =
3,14159) e os operadores aritméticos de multiplicação. 


*/


#include <stdio.h>

int main()
{
    float raio, area, pi = 3.14159;

    printf("\nInforme o raio para encontra a area da circunferencia: ");
    scanf("%f",&raio);

    area = pi * (raio * raio) ;
    
    printf("\n area da circunferencia e : %.2f ",area);

    return 0;
}
