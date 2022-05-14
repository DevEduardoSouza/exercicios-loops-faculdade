/*

. Faça um algoritmo que calcule a área de um triângulo, considerando a fórmula
Áܴܣܧ ൌ   ஻஺ௌா .஺௅்௎ோ஺
ଶ . Utilize as variáveis AREA, BASE e ALTURA e os
operadores aritméticos de multiplicação e divisão. 
*/

int main()
{
    float area, base, altura;

    printf("Informe a base do trinangulo :  \n");
    scanf("%f",&base);
    printf("Informe a altura do trinangulo :  \n");
    scanf("%f",&altura);

    area = (base * altura ) / 2;

    printf("A area do trinangulo e : %.2f ", area);

    
    return 0;
}
