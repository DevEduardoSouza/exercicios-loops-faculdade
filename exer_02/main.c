/*
 Uma  pesquisa  sobre  as  características  físicas  da  população  de  uma  região, coletou os seguintes  dados para cada habitante: sexo  (masculino e feminino), cor dos cabelos (louros, castanhos e pretos) e idade. Escreva um programa que:


*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int idade, ccs, morenas=0 , totalm=0 ,louras=0;
    float prcl=0;
    char sexo;
           
    do
    {
     //Pedir dados 
      printf("Informe a idade\n");
      scanf("%i",&idade);
      
      printf("Digite o sexo m,M ou f,F\n");
      scanf (" %s256[^\n]",&sexo);

      printf("Escolha a opcao da cor dos cabelos\n1 - Louros\n2 - Castanhos\n3 - pretos\n ");
      scanf("%i",&ccs);

      printf("\n-----------------------------------------------------\n");

      //Verificar a cor dos cabelos,idade e contabilizar.
      switch (ccs)
      {
      case 1:
          if ( idade>=18 && idade<=35 )
           {
                louras = louras + 1;
           }   
      break;

      case 2:
      case 3:
          if ( idade>=18 && idade<=35 )
           {
               morenas = morenas +1;
           }  
      break;

      default:
         printf("Opcao escolhida INVALIDA\n");
      break;
      }

      //Verificar o sexo e contabilizar total de mulheres
      switch (sexo)
      {
      case 'm':
      case 'M':
    
      break;

      case 'f':
      case 'F':
            totalm=totalm+1;
      break;
      
      default:
          printf("\nSexo invalido\n");
      break;
      }
    
    } while (idade!=-1);
    
    //Imprimir Resultados
    prcl = (100 * louras)/totalm;
    printf("\nPorcentagem das mulheres entre 18 e 35 anos, louras: %.1f%%",prcl);

    prcl = (100 * morenas)/totalm;
    printf("\nPorcentagem das mulheres entre 18 e 35 anos, morenas: %.1f%%",prcl);
    

    return 0;
}


