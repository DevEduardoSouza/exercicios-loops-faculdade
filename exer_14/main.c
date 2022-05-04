/*
Escreva um algoritmo que leia certa quantidade de nu ́meros e imprima o maior deles e quantas vezes o maior número foi lido. A quantidade de números a serem lidos deve ser fornecida pelo usuário.
*/
int main()
{
    int num=0,maiorNum=0,qtdMaiorNum=0;
    do
    {
      printf("Digite um numero ou digita 0 para parar o programa\n");
      scanf("%i",&num);

      if (num >= maiorNum)
      {
          maiorNum = num;
          if (num == maiorNum)
          {
              qtdMaiorNum++;
          }
             
      }

    } while (num!=0);

    printf("O maior numero foi: %i e ele foi lido: %i vezes ",maiorNum,qtdMaiorNum);

    
    return 0;
}

