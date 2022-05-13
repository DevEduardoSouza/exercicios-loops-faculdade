
#include <stdio.h>
#include <string.h>

int main() {
  float peso, altura, imc;
  char nome[30], sexo;

  for(int i=1; i<=20; i++){
    // Recolher dados dos funcionarios
    printf("\nNome  do funcionario\n");
    scanf (" %256[^\n]", &nome);

    do//sair do loop ate que for infornado o sexo valido
    {
    printf("\nSexo do funcionaro(m, M ou f, F)\n");
    scanf(" %c",&sexo);
    } while (sexo != 'm' && sexo != 'M' && sexo != 'f' && sexo != 'F');

    printf("\nPeso do funcionario (em KG: exemplo 75.62)\n");
    scanf(" %f",&peso);
    printf("\nAltura do funcionario (metros: exemplo 1.80)\n"); 
    scanf(" %f",&altura);

    //Informar o IMC(Indice de Massa Corporal) de cada funcionario
    imc = peso/(altura * altura);
    printf("\nO indice de massa corporal de %s e: %.2f",nome,imc);

    //Percentual de funcionarios obesos
    if(imc >= 30){
      printf(" Funcionario obeso\n");
    }
    //Percentual de funcionarios peso normal masculinos e femininos
    if(sexo == 'm'||sexo== 'M'){
      if(imc<=25){
        printf(" Peso normal\n");
      }
    }
    if(sexo == 'f'||sexo == 'F'){
      if(imc<=27){
        printf(" Peso normal\n");
        
      }
    }
    
  }
  
  return 0;
}