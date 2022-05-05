/*
 O funcionário chamado Carlos tem um colega chamado João que recebe um salário que equivale a um terço do seu salário. Carlos gosta de fazer aplicações na caderneta de poupança e vai aplicar seu salário integralmente nela, pois está rendendo 2% ao mês. João aplicará seu salário integralmente no fundo de renda fixa, que está rendendo 5% ao mês. Construa um programa que deverá calcular e mostrar a quantidade de meses necessários para que o valor pertencente a João iguale ou ultrapasse o valor pertencente a Carlos. Teste com outros valores para as taxas
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int salarioCarlos = 4800, salarioJoao=1600,percentualSalarioC=0,percentualSalarioJ=0;
    for (int i = 1; i <= 100; i++)
    { 
        //calcular o salário de Carlos multiplicando com 0.02
        percentualSalarioC = salarioCarlos * 0.02;
        salarioCarlos = salarioCarlos + percentualSalarioC;
        //calcular o salário de Joao multiplicando com 0.05
        percentualSalarioJ = salarioJoao * 0.05;
        salarioJoao = salarioJoao + percentualSalarioJ;

        //o sistema para quando os salários forem iguais
        if (salarioJoao >= salarioCarlos)
        {
            printf("joao tera o mesma quantia de dinheiro que carlos em %i meses",i);
            break;
        }
        
    }
   
    return 0;
}




