/* 
    Faça um algoritmo que:
a) Leia o nome;
b) Leia o sobrenome;
c) Concatene o nome com o sobrenome;
d) Apresente o nome completo.

*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char nome[30], sobrenome[30] , nomeCompleto;

    printf("Informe seu nome\n");
    scanf("%s",&nome);
    printf("Informe seu sobrenome\n");
    scanf("%s",&sobrenome);

    printf("\t\n%s %s",nome, sobrenome);

    return 0;
}
