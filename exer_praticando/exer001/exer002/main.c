#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primo;
    
    for(int i=130 ; i<=190 ; i+=2){

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