#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,vn=0,vnv=0,totalVotosP=0,totalVotosV=0,vp=7,vv=7;
float porPrefeito1,porPrefeito2,porPrefeito3,porPrefeito4,porVereador1,porVereador2,porVereador3,porVereador4;
char cr;

    printf("-------Inicie as Votacoes-------");

    while(vp!=999)

    {
    //Imprimir as opcoes disponiveis
    printf("\n\nDigite o numero do seu candidato para PREFEITO e pressione ENTRE\n027- fulano - PPP\n414- Beltrando - PRF\n687- Sicrano - PSB\n000- Voto nulo\n");
    scanf("%i",&vp);

    //Contabilizar votos para prefeito 
    switch(vp){

        case 999:
        printf("\n\t\tVotacao para PREFEITO ENCERRADA\n");
        break;
        
        case 027:
        c1=c1+1;
        printf("\n027- fulano - PPP\nC para confirmar --- D para corrigir\n");
        scanf("%s",&cr);
        break;
        
        case 414:
        c2=c2+1;
        printf("\n414- Beltrano - PRF\nC para confirmar --- D para corrigir\n");
        scanf("%s",&cr);
        break;
        
        case 687:
        c3=c3+1;
        printf("\n687- Sicrano - PSB\nC para confirmar --- D para corrigir\n");
        scanf("%s",&cr);
        break;
        
        case 000:
        vn=vn+1;
        printf("\n000- Voto nulo\nC para confirmar --- D para corrigir\n");
        scanf("%s",&cr);
        break;

        default:
        printf("Numero candidato INVALIDO!!");
        break;
        
    }

        
    printf("\n\nDigite o numero do seu candidato para VEREADOR e pressione ENTRE\n055- Megano - TPP\n251- Citano - FPP\n714- Zutano - PSB\n000- Voto nulo\n");
    scanf("%i",&vp);
     
    //Contabilizar votos para vereador
    switch(vp)
    {
        case 999:
        printf("\n\t\tVotacao ENCERRADA\n");
        break;
        
        case 055:
        c4=c4+1;
        printf("\n055- Megano - TPP\nC para confirmar --- D para corrigir\n");
        scanf("%s",&cr);
        break;
        
        case 251:
        c5=c5+1;
        printf("\n251- Citano - FPP\nC para confirmar --- D para corrigir\n");
        scanf("%s",&cr);
        break;
        
        case 714:
        c6=c6+1;
        printf("\n714- Zutano - PSB\nC para confirmar --- D para corrigir\n");
        scanf("%s",&cr);
        break;

        case 000:
        vnv=vnv+1;
        printf("\n000- Voto nulo\nC para confirmar --- D para corrigir\n");
        scanf("%s",&cr);
        break;

        default:
        printf("Numero candidato INVALIDO!!");
        break;
    }

}

printf("\n APURACAO DE VOTOS PARA PREFEITO\nQuantidade de votos para Fulano: %i\nQuantidade de votos para Beltrando: %i\nQuantidade de votos para Sicrando: %i\nVotos nulos: %i\n",c1,c2,c3,vn);
  
printf("\n APURACAO DE VOTOS PARA VEREADOR\nQuantidade de votos para Megano: %i\nQuantidade de votos para Citano: %i\nQuantidade de votos para Zutano: %i\nVotos nulos: %i\n",c4,c5,c6,vnv);

  //
   totalVotosP = c1 + c2 + c3 +vn;
   porPrefeito1 = (100 * c1 ) / totalVotosP;
   porPrefeito2 = (100 * c2 ) / totalVotosP;
   porPrefeito3 = (100 * c3 ) / totalVotosP;
   porPrefeito4 = (100 * vn ) / totalVotosP;

   printf("\n\n\t---------PORCENTAGEM DE VOTOS PARA PREFEITO---------\n");
   printf("\nPorcentagem de votos de 027- fulano :%.2f%%\nPorcentagem de votos de 414- Beltrando :%.2f%%\nPorcentagem de votos de 687- Sicrano :%.2f%%\nPorcentagem de votos Nulos :%.2f%%\n",porPrefeito1,porPrefeito2,porPrefeito3,porPrefeito4);

   //
   totalVotosV = c4 + c5 + c6 +vnv;
   porVereador1 = (100 * c4 ) / totalVotosV;
   porVereador2 = (100 * c5 ) / totalVotosV;
   porVereador3 = (100 * c6 ) / totalVotosV;
   porVereador4 = (100 * vnv ) / totalVotosV;

    printf("\n\n\t---------PORCENTAGEM DE VOTOS PARA VEREADOR---------\n");
   printf("\nPorcentagem de votos de 055- Megano :%.2f%%\nPorcentagem de votos de 251- Citano :%.2f%%\nPorcentagem de votos de 714- Zutano :%.2f%%\nPorcentagem de votos Nulos :%.2f%%\n",porVereador1,porVereador2,porVereador3,porVereador4);

   //Imprimir o vencedor para prefeito
if (c1 >= c2 && c1 >= c3 )
    {
        printf("\n027- fulano foi O VENCEDOR para PREFEITO\n");
    }else if (c2>= c1 && c2 >= c3)
    {
        printf("\n414- Beltrando foi O VENCEDOR para PREFEITO\n");
    }else{
        printf("\n687- Sicrano foi O VENCEDOR para PREFEITO\n");
    }

//Imprimir o vencedor para vereador
if (c4 >= c5 && c4 >= c6 )
    {
        printf("\n055- Megano foi O VENCEDOR para VEREADOR\n");
    }else if (c5>= c4 && c5 >= c6)
    {
        printf("\n251- Citano foi O VENCEDOR para VEREADOR\n");
    }else{
        printf("\n714- Zutano foi O VENCEDOR para VEREADOR\n");
    }

return 0;
}