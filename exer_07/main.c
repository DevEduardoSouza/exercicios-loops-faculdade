#include<stdio.h>
int main()
{
    float atual=2.0, prox=3.0, anterior=1.0,div, s = 100.0+(0.0/1.0)+(5.0/2.0);
    
    for (int cima = 10; cima <= 80; cima+=5)
    {
        prox = anterior + atual;
        anterior=atual;
        atual=prox;
        div= (cima/prox);
        s = s + div;   
    }
    printf("Resultado de s : %.4f",s);
    return 0;
}
