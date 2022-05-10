/*
Escreva um programa em C para encontrar os números primos dentro de um intervalo de números.
*/

#include <stdio.h>

int main(void) {
  
  int primo,num;
  printf("Digite um numero para encotra todos os primos antecessor\n");
  scanf("%i",&num);

  for(int i=1 ; i<=num ; i++){

    primo=0;
    for (int x = 1; x <=i; x++){
      if(i % x == 0){
        primo++;
      }  
    }
    
     if(primo==2){
         printf("%d, ", i);
      }
  }
  
  return 0;
}