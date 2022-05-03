/*
Escreva um programa em C para encontrar os números primos dentro de um intervalo de números.
*/

#include <stdio.h>

int main(void) {
  
  int primo;

  for(int i=2 ; i<=50 ; i++){

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