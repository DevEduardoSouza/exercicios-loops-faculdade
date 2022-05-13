/*
Escreva um programa em C para encontrar os números primos dentro de um intervalo de números.
*/

#include <stdio.h>

int main(void) {
  
  int primo,num1,num2;
  printf("Digite dois numero para encotra todos os primos entre eles:\n");
  scanf("%i %i",&num1,&num2);

  for(int i=num1 ; i<=num2 ; i++){

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