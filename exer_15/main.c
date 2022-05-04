/*

Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores desse número, com exceção dele próprio. Ex: a soma dos divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78

*/

int main()
{
    int soma = 0, num;

     printf("Digite um numero interio\n");
     scanf("%i",&num);
   for (int i = 1 ; i < num ; i++ )
   { 
     
     for (int x = 1; x < i; x++)
     {
         if (i % x == 0)
         {
            soma = x + i;
         }
     }

   }
   printf("\nA soma dos divisores de %i e: %i",num,soma);

    return 0;
}
