#include<stdio.h>
#include<stdlib.h>

int main (void){
  int j,valor,i,y=0;

  printf("informe um numero inteiro positivo");
     scanf("%d",&valor);

  for (i= 1; i <= valor; i++)
  {
    for ( j= 1; j <= i; j++){
      y++;
    printf(" %d",y);
  }

  printf("\n");

  }
  return 0;
}
