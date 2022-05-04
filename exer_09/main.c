#include <stdio.h>

/*

 Foi realizada uma pesquisa com 200 pessoas que assistiram uma peça de teatro, em relação a sua opinião sobre a mesma. Cada espectador respondeu a um questionário que solicitava os seguintes dados:

 .......

*/

int main(void) {
  int idade, inden, notaPeca, qtd10=0, somaIdades=0, opinaoruim=0, idVelha=0,IDvelho=0;
  float md_idade, porcentagemruim;

  for(int i=1;i<=2;i++){

    printf("Digite sua idade\n");
    scanf("%i",&idade);
    printf("Digite seu indentificador\n");
    scanf("%i",&inden);
    printf("Sua opiniao em relacao a peca(de 0 a 10)\n");
    scanf("%i",&notaPeca);
    printf("\n");

    if (idade >= idVelha) // indentificador da idade mais velha
    {
        idVelha = idade;
        IDvelho = inden;
    }
    
    
    if(notaPeca==10)//Guarda  o total de notas10
    {
      qtd10++;
    }
    
    //calcular a média de idade das pessoas
    somaIdades = somaIdades + idade;
    md_idade = somaIdades/6;

    if(notaPeca<=5)//Guarda o total de notas menor ou igual a 5
    {
      opinaoruim++;
    }

    //calcular porcentagem de notas menor ou igual 5
    porcentagemruim = (opinaoruim * 100)/6;
  }
  
  
  printf("\nQuantidade de respostas 10 : foi %i",qtd10);

  printf("\nMedia de idade das pessoas que respondeiro o questonario: %.2f anos",md_idade);

  printf("\nPorcentagem das pessoas que responderam 5 ou menos para opiniao da peca %.2f %%",porcentagemruim);

  printf("\nPessoa mais velha:%i",idVelha);
   printf("\nIndentificador da pessoa  mais velha:%i",IDvelho);
  

  return 0;
}