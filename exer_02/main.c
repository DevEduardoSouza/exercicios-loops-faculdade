/*
 Uma  pesquisa  sobre  as  características  físicas  da  população  de  uma  região, coletou os seguintes  dados para cada habitante: sexo  (masculino e feminino), cor dos cabelos (louros, castanhos e pretos) e idade. Escreva um programa que:


*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int idade, cor_cabelos, morenos=0, louros=0, totalMulher=0;
    float procentagemCabelos=0;
    char sexo;
           
    do
    {
      //Pedir dados 
      printf("Informe a idade\n");
      scanf("%i",&idade);
      
      printf("Digite o sexo m,M ou f,F\n");
      scanf (" %s256[^\n]",&sexo);

      printf("Escolha a opcao da cor dos cabelos\n1 - Louros\n2 - Castanhos\n3 - pretos\n ");
      scanf("%i",&cor_cabelos);


      //Verificar a cor dos cabelos,idade e contabilizar.
      switch (cor_cabelos)
      {
      case 1:
          if ( idade >= 18 && idade <= 35 )
           {
                louros = louros + 1;
           }   
      break;

      case 2:
      case 3:
          if ( idade>=18 && idade<=35 )
           {
               morenos = morenos +1;
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
                totalMulher = totalMulher + 1;
        break;
        
        default:
            printf("Sexo invalido\n\n");
        break;
      }
    
    } while (idade!=-1);
    
    //Imprimir Resultados
    procentagemCabelos = (100 * louros) / totalMulher;
    printf("\nPorcentagem das mulheres entre 18 e 35 anos, louras: %.2f%%",procentagemCabelos);

    procentagemCabelos = (100 * morenos) / totalMulher;
    printf("\nPorcentagem das mulheres entre 18 e 35 anos, morenas: %.2f%%",procentagemCabelos);
    

    return 0;
}





