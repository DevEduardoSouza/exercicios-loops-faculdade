#include <stdio.h>
#include <string.h>

int main()
{
    char nome[30];
    float nota1[2],nota2[2],media[2],mediaTurma=0,somaNotas=0;
    int tot=0;
    
    

    for (int i = 0; i < 3; i++)
    {
        printf("Informe o nome do aluno: ");
        scanf(" %s",&nome);

        printf("Digite a primeria nota: ");
        scanf("%f",&nota1[i]);

        printf("Digite a segunda nota: ");
        scanf("%f",&nota2[i]);

        media[i] = ( nota1[i] + nota2[i] ) / 2.0;
        somaNotas = somaNotas + media[i];

    }

    mediaTurma = somaNotas / 3.0;
    printf("\n\nMedia da turma  : %.2f",mediaTurma);

    for (int i = 0; i < 3; i++)
    {
        printf("\nA media do aluno e de %.2f",media[i]);
        if (media[i] > mediaTurma);
       {
          tot = tot + 1;
       }
    }
  
    printf("\ntotal de alunos acima da media: %i",tot);
    
    
  

    return 0;
}
