/*

Faça um algoritmo que:
a) Obtenha o valor para a variável HT (horas trabalhadas no mês);
b) Obtenha o valor para a variável VH (valor hora trabalhada):
c) Obtenha o valor para a variável PD (percentual de desconto);
d) Calcule o salário bruto => SB = HT * VH;
e) Calcule o total de desconto => TD = (PD/100)*SB;
f) Calcule o salário líquido => SL = SB – TD;
g) Apresente os valores de: Horas trabalhadas, Salário Bruto, Desconto, Salário
Liquido. 

*/
#include<stdio.h>

int main()
{
    float ht, vh, pd, sb, td, sl;

    printf("Informe a horas trabalhadas no mes: \n");
    scanf("%f",&ht);
    printf("Informe o valor horas trabalhadas: \n");
    scanf("%f",&vh);
    printf("Informe o percentual de desconto:  \n");
    scanf("%f",&pd);

    sb = ht * vh ;
    td = (pd/100) * sb;
    sl = sb - td;

    printf("O valor de horas trabalhads: R$ %.2f\nSalario bruto: R$ %.2f\nDesconto: R$ %.2f\nSalario liquido: R$ %.2f\n",ht, sb, td, sl);



    return 0;
}
