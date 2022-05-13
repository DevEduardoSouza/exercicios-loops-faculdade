#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

int candidato_prefeito1=0, candidato_prefeito2=0, candidato_prefeito3=0, voto_nuloPrefeito=0, totalVotos_prefeito=0, voto_prefeito=7;
int candidato_vereador1=0, candidato_vereador2=0, candidato_vereador3=0, votoNulo_vereador=0, totalVotos_vereador=0, voto_vereador=7;
float porPrefeito1, porPrefeito2, porPrefeito3, por_votoNulo_prefeito;
float porVereador1, porVereador2, porVereador3, por_votoNulo_Vereador;
char confirmarVoto;

    printf("-------Inicie as Votacoes-------");

    do//permanecer no loop até que seja informado 999
    {

        do
        {
        
        //Imprimir as opcoes disponiveis para prefeito
         printf("\n\nDigite o numero do seu candidato para PREFEITO e pressione ENTRE\n027- fulano - PPP\n414- Beltrando - PRF\n687- Sicrano - PSB\n000- Voto nulo\n");
         scanf("%i",&voto_prefeito);

         if (voto_prefeito==999)
         {
           break;
         }
         
         {

             printf("C - para confirmar ou D - para corrigir\n");
             scanf("%s",&confirmarVoto); 

         } while ((confirmarVoto != 'c' && confirmarVoto != 'C') && (confirmarVoto != 'd' && confirmarVoto != 'D'));

         if (confirmarVoto == 'd' && 'D')
         {
             printf("Voto corrigido com sucesso");
         }else if (confirmarVoto == 'c' || 'C'){
             printf("Voto confirmado com sucesso");
         }
         
         

        //Contabilizar votos para prefeito 
            switch(voto_prefeito){

                case 999:
                printf("\n\t\tVotacao para PREFEITO ENCERRADA\n");
                break;
                
                case 027:
                    if(confirmarVoto =='c'||'C')
                        {
                            candidato_prefeito1 = candidato_prefeito1 + 1;
                        
                        }
                break;
                
                case 414:
                if(confirmarVoto=='c'||'C')
                    {
                        candidato_prefeito2 = candidato_prefeito2 + 1 ;
                        
                    }
                break;
                
                case 687:
                if(confirmarVoto=='c'||'C')
                    {
                        candidato_prefeito3 = candidato_prefeito3 + 1;
                    }
                break;
                
                case 000:
                if(confirmarVoto =='c'||'C')
                    {
                        voto_nuloPrefeito = voto_nuloPrefeito + 1;
                    }
                break;


                default:
                    printf("Numero candidato INVALIDO!!\nDigite o numero correto");
                break;
                
                
            }
              
        } while ( (confirmarVoto != 'c' && confirmarVoto != 'C') || (voto_prefeito=! 999 && 027 && 414 && 687 &&000 ) );


        printf("--------------------------------------------------------------------------------");
        
        //Opções para vereador
        printf("\n\nDigite o numero do seu candidato para VEREADOR e pressione ENTRE\n055- Megano - TPP\n251- Citano - FPP\n714- Zutano - PSB\n000- Voto nulo\n");
        scanf("%i",&voto_vereador);

        //Contabilizar votos para vereador
        switch(voto_vereador)
        {
            case 999:
            printf("\n\t\tVotacao ENCERRADA\n");
            break;
            
            case 055:
            printf("\n055- Megano - TPP\n");
            printf("C - para confirmar ou D - para corrigir\n");
        scanf("%s",&confirmarVoto);
            if(confirmarVoto =='c'||'C')
                {
                    candidato_vereador1 = candidato_vereador1 + 1;
                    printf("VOTO PARA VEREADOR CONFIRMADO!\n");
                }
            break;
            
            case 251:
            printf("\n251- Citano - FPP\n");
            printf("C - para confirmar ou D - para corrigir\n");
        scanf("%s",&confirmarVoto);
            if(confirmarVoto =='c'||'C')
                {
                    candidato_vereador2 = candidato_vereador2 + 1;
                    printf("VOTO PARA VEREADOR CONFIRMADO!\n");
                }
            break;
            
            case 714:
            printf("\n714- Zutano - PSB\n");
            printf("C - para confirmar ou D - para corrigir\n");
        scanf("%s",&confirmarVoto);
            if(confirmarVoto=='c'||'C')
                {
                     candidato_vereador3 = candidato_vereador3 + 1;
                     printf("VOTO PARA VEREADOR CONFIRMADO!\n");
                }
            break;

            case 000:
            votoNulo_vereador = votoNulo_vereador + 1;
            printf("\n000- Voto nulo\n");
            printf("C - para confirmar ou D - para corrigir\n");
        scanf("%s",&confirmarVoto);
            if(confirmarVoto=='c'||'C')
                {
                    votoNulo_vereador = votoNulo_vereador + 1;
                }
            break;

            default:
            printf("Numero candidato INVALIDO!!");
            break;
        }
        
        printf("--------------------------------------------------------------------------------\n\n");

    } while (voto_prefeito=!999);

//Resultado para prefeito
printf("\n      ----------APURACAO DE VOTOS PARA PREFEITO----------\n\n\t\tPREFEITOS\t\tVOTOS\n\t\tFulano\t\t\t  %i\n\t\tBeltrando\t\t  %i\n\t\tSicrando\t\t  %i\n\t\tVotos nulos\t\t  %i\n",candidato_prefeito1, candidato_prefeito2, candidato_prefeito3, voto_nuloPrefeito);

//Calcular a porcentagem para prefeito
totalVotos_prefeito = candidato_prefeito1 + candidato_prefeito2 + candidato_prefeito3 + voto_nuloPrefeito;
porPrefeito1 = (100 * candidato_prefeito1 ) / totalVotos_prefeito;
porPrefeito2 = (100 * candidato_prefeito2 ) / totalVotos_prefeito;
porPrefeito3 = (100 * candidato_prefeito3 ) / totalVotos_prefeito;
por_votoNulo_prefeito = (100 * voto_nuloPrefeito ) / totalVotos_prefeito;

   //Imprimir as porcentagems dos prefeitos
   printf("\n      ---------PORCENTAGEM DE VOTOS PARA PREFEITO---------\n");
   printf("\n\t\tPREFEITOS\t\tPORCENTAGEM DE VOTOS\n\t\t027- fulano  \t\t%.2f%%\n\t\t414- Beltrando  \t%.2f%%\n\t\t687- Sicrano  \t\t%.2f%%\n\t\tvotos Nulos  \t\t%.2f%%",porPrefeito1,porPrefeito2,porPrefeito3,por_votoNulo_prefeito);

    //Imprimir o vencedor para prefeito
    if (candidato_prefeito1 >= candidato_prefeito2 && candidato_prefeito1 >= candidato_prefeito3 )
    {
        printf("\n\n\t\t027- fulano foi O VENCEDOR para PREFEITO\n");
    }else if (candidato_prefeito2 >= candidato_prefeito1 && candidato_prefeito2 >= candidato_prefeito3)
    {
        printf("\n\n\t\t414- Beltrando foi O VENCEDOR para PREFEITO\n");
    }else{
        printf("\n\n\t\t687- Sicrano foi O VENCEDOR para PREFEITO\n");
    }

  printf("\n\n--------------------------------------------------------------------------------\n\n");

    //Resultado para prefeito
    printf("      ----------APURACAO DE VOTOS PARA VEREADOR----------");
    printf("\n\n\t\tPREFEITOS\t\tVOTOS\n\t\tMegano\t\t\t  %i\n\t\tCitano\t\t\t  %i\n\t\tZutano\t\t\t  %i\n\t\tVotos nulos\t\t  %i\n",candidato_vereador1, candidato_vereador2, candidato_vereador3, votoNulo_vereador);

    //Calcular a porcentagem para vereador
   totalVotos_vereador = candidato_vereador1 + candidato_vereador2 + candidato_vereador3 + votoNulo_vereador;
   porVereador1 = (100 * candidato_vereador1 ) / totalVotos_vereador;
   porVereador2 = (100 * candidato_vereador2 ) / totalVotos_vereador;
   porVereador3 = (100 * candidato_vereador3 ) / totalVotos_vereador;
   por_votoNulo_Vereador = (100 * votoNulo_vereador ) / totalVotos_vereador;

    //Imprimir as porcentagems dos vereadores
   printf("\n      ----------PORCENTAGEM DE VOTOS PARA VEREADOR---------\n");
   printf("\n\t\tVEREADORES\t\tPORCENTAGEM DE VOTOS\n\t\t055- Megano  \t\t%.2f%%\n\t\t251- Citano  \t\t%.2f%%\n\t\t714- Zutano  \t\t%.2f%%\n\t\tvotos Nulos  \t\t%.2f%%\n",porVereador1, porVereador2, porVereador3, por_votoNulo_Vereador);

    //Imprimir o vencedor para vereador
    if (candidato_vereador1 >= candidato_vereador2 && candidato_vereador1 >= candidato_vereador3 )
        {
            printf("\n\n\t\t055- Megano foi O VENCEDOR para VEREADOR\n");
        }else if (candidato_vereador3 >= candidato_vereador1 && candidato_vereador2 >= candidato_vereador3)
        {
            printf("\n\n\t\t251- Citano foi O VENCEDOR para VEREADOR\n");
        }else{
            printf("\n\n\t\t714- Zutano foi O VENCEDOR para VEREADOR\n");
        }


return 0;
}