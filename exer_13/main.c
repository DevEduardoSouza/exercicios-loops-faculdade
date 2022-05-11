#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,vn=0,vnv=0,totalVotosP=0,totalVotosV=0,vp=7,vv=7;
float porPrefeito1,porPrefeito2,porPrefeito3,porPrefeito4,porVereador1,porVereador2,porVereador3,porVereador4;
char cr;

    printf("-------Inicie as Votacoes-------");
    while(vp!=999)//permanecer no loop até que seja informado 999
    {

          //Imprimir as opcoes disponiveis para prefeito
         printf("\n\nDigite o numero do seu candidato para PREFEITO e pressione ENTRE\n027- fulano - PPP\n414- Beltrando - PRF\n687- Sicrano - PSB\n000- Voto nulo\n");
         scanf("%i",&vp);

        //Contabilizar votos para prefeito 
        switch(vp){

            case 999:
            printf("\n\t\tVotacao para PREFEITO ENCERRADA\n");
            break;
            
            case 027:
            printf("\n027- fulano - PPP\n");
            printf("C - para confirmar ou D - para corrigir\n");
            scanf("%s",&cr);
            if(cr=='c'||'C')
                {
                    c1=c1+1;
                }
            break;
            
            case 414:
            printf("\n414- Beltrano - PRF\n");
            printf("C - para confirmar ou D - para corrigir\n");
            scanf("%s",&cr);
            if(cr=='c'||'C')
                {
                    c2=c2+1;
                }
            break;
            
            case 687:
            printf("\n687- Sicrano - PSB\n");
            printf("C - para confirmar ou D - para corrigir\n");
            scanf("%s",&cr);
            if(cr=='c'||'C')
                {
                    c3=c3+1;
                }
            break;
            
            case 000:
            printf("\n000- Voto nulo\n");
            printf("C - para confirmar ou D - para corrigir\n");
            scanf("%s",&cr);
            if(cr=='c'||'C')
                {
                    vn=vn+1;
                }
            break;


            default:
                printf("Numero candidato INVALIDO!!");
            break;
            
        }
        printf("VOTO PARA PREFEITO CONFIRMADO!\n");
        printf("--------------------------------------------------------------------------------");

        //Opções para vereador
        printf("\n\nDigite o numero do seu candidato para VEREADOR e pressione ENTRE\n055- Megano - TPP\n251- Citano - FPP\n714- Zutano - PSB\n000- Voto nulo\n");
        scanf("%i",&vp);

        //Contabilizar votos para vereador
        switch(vp)
        {
            case 999:
            printf("\n\t\tVotacao ENCERRADA\n");
            break;
            
            case 055:
            printf("\n055- Megano - TPP\n");
            printf("C - para confirmar ou D - para corrigir\n");
        scanf("%s",&cr);
            if(cr=='c'||'C')
                {
                    c4=c4+1;
                }
            break;
            
            case 251:
            printf("\n251- Citano - FPP\n");
            printf("C - para confirmar ou D - para corrigir\n");
        scanf("%s",&cr);
            if(cr=='c'||'C')
                {
                    c5=c5+1;
                }
            break;
            
            case 714:
            printf("\n714- Zutano - PSB\n");
            printf("C - para confirmar ou D - para corrigir\n");
        scanf("%s",&cr);
            if(cr=='c'||'C')
                {
                     c6=c6+1;
                }
            break;

            case 000:
            vnv=vnv+1;
            printf("\n000- Voto nulo\n");
            printf("C - para confirmar ou D - para corrigir\n");
        scanf("%s",&cr);
            if(cr=='c'||'C')
                {
                    vnv=vnv+1;
                }
            break;

            default:
            printf("Numero candidato INVALIDO!!");
            break;
        }
        printf("VOTO PARA VEREADOR CONFIRMADO!\n");
        printf("--------------------------------------------------------------------------------\n\n");

    }

//Resultado para prefeito
printf("\n      ----------APURACAO DE VOTOS PARA PREFEITO----------\n\n\t\tPREFEITOS\t\tVOTOS\n\t\tFulano\t\t\t  %i\n\t\tBeltrando\t\t  %i\n\t\tSicrando\t\t  %i\n\t\tVotos nulos\t\t  %i\n",c1,c2,c3,vn);

   //Calcular a porcentagem para prefeito
   totalVotosP = c1 + c2 + c3 + vn;
   porPrefeito1 = (100 * c1 ) / totalVotosP;
   porPrefeito2 = (100 * c2 ) / totalVotosP;
   porPrefeito3 = (100 * c3 ) / totalVotosP;
   porPrefeito4 = (100 * vn ) / totalVotosP;

   //Imprimir as porcentagems dos prefeitos
   printf("\n      ---------PORCENTAGEM DE VOTOS PARA PREFEITO---------\n");
   printf("\n\t\tPREFEITOS\t\tPORCENTAGEM DE VOTOS\n\t\t027- fulano  \t\t%.2f%%\n\t\t414- Beltrando  \t%.2f%%\n\t\t687- Sicrano  \t\t%.2f%%\n\t\tvotos Nulos  \t\t%.2f%%",porPrefeito1,porPrefeito2,porPrefeito3,porPrefeito4);

    //Imprimir o vencedor para prefeito
    if (c1 >= c2 && c1 >= c3 )
    {
        printf("\n\n\t\t027- fulano foi O VENCEDOR para PREFEITO\n");
    }else if (c2>= c1 && c2 >= c3)
    {
        printf("\n\n\t\t414- Beltrando foi O VENCEDOR para PREFEITO\n");
    }else{
        printf("\n\n\t\t687- Sicrano foi O VENCEDOR para PREFEITO\n");
    }

  printf("--------------------------------------------------------------------------------\n");

    //Resultado para prefeito
    printf("      ----------APURACAO DE VOTOS PARA VEREADOR----------");
    printf("\n\n\t\tPREFEITOS\t\tVOTOS\n\t\tMegano\t\t\t  %i\n\t\tCitano\t\t\t  %i\n\t\tZutano\t\t\t  %i\n\t\tVotos nulos\t\t  %i\n",c4,c5,c6,vnv);

  
    //Calcular a porcentagem para vereador
   totalVotosV = c4 + c5 + c6 +vnv;
   porVereador1 = (100 * c4 ) / totalVotosV;
   porVereador2 = (100 * c5 ) / totalVotosV;
   porVereador3 = (100 * c6 ) / totalVotosV;
   porVereador4 = (100 * vnv ) / totalVotosV;

    //Imprimir as porcentagems dos vereadores
   printf("\n\n\t---------PORCENTAGEM DE VOTOS PARA VEREADOR---------\n");
   printf("\nPorcentagem de votos de 055- Megano :%.2f%%\nPorcentagem de votos de 251- Citano :%.2f%%\nPorcentagem de votos de 714- Zutano :%.2f%%\nPorcentagem de votos Nulos :%.2f%%\n",porVereador1,porVereador2,porVereador3,porVereador4);

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