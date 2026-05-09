#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rice_stock = 10;
    int oil_stock = 25;
    int tomato_stock = 12 ;
       int choix;
      int qtte_rice;
     int qtte_oil;
      int qtte_tomato;


    printf("                 PRODUIT EN STOCK                      \n");
    printf(" 1-  RIZ    **********  QUANTITE  : %d  *********  PRIX : 2500 \n", rice_stock);
    printf(" 2-  HUILE    **********  QUANTITE  : %d  *********  PRIX : 1000 \n", oil_stock);
    printf(" 3-  TOMATE   **********  QUANTITE  : %d  *********  PRIX : 1500 \n", tomato_stock);
    printf("                                                               \n");
    printf("            ENTREZ LE(S) NUMERO(S) DU (DES) PRODUIT(S) QUE VOUS VOULEZ                   \n");
      scanf("%d",&choix);
        if ( choix == 123 || choix == 132 || choix == 231 || choix == 213 || choix == 312 || choix == 321){
            printf(" VOUS AVEZ CHOISI LE RIZ , TOMATE ET L'HUILE  \n");
             printf("                                                               \n");
            printf(" QUELLE QUANTITE DE RIZ VOULEZ VOUS ?\n");
            scanf("%d",&qtte_rice);
             printf("                                                               \n");
            printf(" QUELLE QUANTITE D'HUILE VOULEZ VOUS ?\n");
            scanf("%d",&qtte_oil);
             printf("                                                               \n");
            printf(" QUELLE QUANTITE DE TOMATE VOULEZ VOUS ?\n");
            scanf("%d",&qtte_tomato);
             printf("                                                               \n");
        }else if ( choix == 1){
            printf(" VOUS AVEZ CHOISI LE RIZ  \n");
             printf("                                                               \n");
            printf(" QUELLE QUANTITE DE RIZ VOULEZ VOUS ?\n");
            scanf("%d",&qtte_rice);
             printf("                                                               \n");
        }else if ( choix == 2){
            printf(" VOUS AVEZ CHOISI L'HUILE   \n");
             printf("                                                               \n");
            printf(" QUELLE QUANTITE D'HUILE VOULEZ VOUS ?\n");
            scanf("%d",&qtte_oil);
             printf("                                                               \n");
        }else if ( choix == 3){
            printf(" VOUS AVEZ CHOISI LA TOMATE   \n");
             printf("                                                               \n");
            printf(" QUELLE QUANTITE DE TOMATO VOULEZ VOUS ?\n");
            scanf("%d",&qtte_tomato);
             printf("                                                               \n");
        }else if ( choix == 12 || choix == 21){
            printf(" VOUS AVEZ CHOISI LE RIZ ET L'HUILE  \n");
            printf(" QUELLE QUANTITE DE RIZ VOULEZ VOUS ?\n");
            scanf("%d",&qtte_rice);
             printf(" QUELLE QUANTITE D'HUILE VOULEZ VOUS ?\n");
            scanf("%d",&qtte_oil);
        }else if ( choix == 13 || choix == 31){
            printf(" VOUS AVEZ CHOISI LE RIZ ET LA TOMATE \n");
             printf("                                                               \n");
            printf(" QUELLE QUANTITE DE RIZ VOULEZ VOUS ?\n");
            scanf("%d",&qtte_rice);
             printf("                                                               \n");
            printf(" QUELLE QUANTITE DE TOMATE VOULEZ VOUS ?\n");
            scanf("%d",&qtte_tomato);
             printf("                                                               \n");
        }else if ( choix == 23 || choix == 32 ){
            printf(" VOUS AVEZ CHOISI L'HUILE ET LA TOMATE \n");
             printf("                                                               \n");
             printf(" QUELLE QUANTITE D'HUILE VOULEZ VOUS ?\n");
            scanf("%d",&qtte_oil);
             printf("                                                               \n");
            printf(" QUELLE QUANTITE DE TOMATE VOULEZ VOUS ?\n");
            scanf("%d",&qtte_tomato);
             printf("                                                               \n");
            }else if ( choix != 123 && choix != 132 && choix != 231 && choix != 213 && choix != 312 && choix != 321 &&  choix == 1 &&  choix != 2 &&  choix != 3 && choix != 23 && choix != 32 &&
                       choix != 13 && choix != 31 && choix != 12 && choix != 21){
            printf(" VOUS AVEZ CHOISIS  : %d  , CE QUI NE CORRESPOND PAS A NOTRE CATALOGUE  VEUILEZ REESSAYER EN PRENNANT EN COMPTE LE CATALOGUE  \n");
            printf("                                                               \n");
           scanf("%d",&choix);
        }
        printf("                                   RECU                                           \n");
      printf("                                                               \n");
      printf("                                                               \n");

          if ( choix == 123 || choix == 132 || choix == 231 || choix == 213 || choix == 312 || choix == 321){
            printf("                     RECAP DE VOS ACHATS                        \n");
             printf("                                                               \n");
                       printf("*********************************************************************\n");
             printf(" RIZ : %d  PACKETS   PRIX : %d  \n", qtte_rice , qtte_rice * 2500);
                printf("                                                               \n");
                       printf("*********************************************************************\n");
              printf(" HUILE: %d  PACKETS   PRIX : %d  \n", qtte_oil , qtte_oil * 1000);
                 printf("                                                               \n");
                        printf("*********************************************************************\n");
            printf(" TOMATE: %d  PACKETS   PRIX : %d  \n", qtte_tomato , qtte_tomato * 1500);
               printf("                                                               \n");
                      printf("*********************************************************************\n");
            printf("                                                               \n");
        }else if ( choix == 1){
                        printf("                     RECAP DE VOS ACHATS                        \n");
             printf("                                                               \n");
                       printf("*********************************************************************\n");
             printf(" RIZ : %d  PACKETS   PRIX : %d  \n", qtte_rice , qtte_rice * 2500);
                printf("                                                               \n");
                       printf("*********************************************************************\n");
            printf("                                                               \n");
        }else if ( choix == 2){
                        printf("                     RECAP DE VOS ACHATS                        \n");
             printf("                                                               \n");
                       printf("*********************************************************************\n");
              printf(" HUILE: %d  PACKETS   PRIX : %d  \n", qtte_oil , qtte_oil * 1000);
                 printf("                                                               \n");
                        printf("*********************************************************************\n");
            printf("                                                               \n");
        }else if ( choix == 3){
                    printf("                     RECAP DE VOS ACHATS                        \n");
             printf("                                                               \n");
                       printf("*********************************************************************\n");
            printf(" TOMATE: %d  PACKETS   PRIX : %d  \n", qtte_tomato , qtte_tomato * 1500);
               printf("                                                               \n");
                      printf("*********************************************************************\n");
            printf("                                                               \n");
        }else if ( choix == 12 || choix == 21){
                    printf("                     RECAP DE VOS ACHATS                        \n");
                              printf("*********************************************************************\n");
             printf("                                                               \n");
                       printf("*********************************************************************\n");
             printf(" RIZ : %d  PACKETS   PRIX : %d  \n", qtte_rice , qtte_rice * 2500);
                printf("                                                               \n");
                       printf("*********************************************************************\n");
              printf(" HUILE: %d  PACKETS   PRIX : %d  \n", qtte_oil , qtte_oil * 1000);
                 printf("                                                               \n");
                        printf("*********************************************************************\n");
            printf("                                                               \n");
        }else if ( choix == 13 || choix == 31){
                      printf("                     RECAP DE VOS ACHATS                        \n");
             printf("                                                               \n");
              printf("*********************************************************************\n");
             printf(" RIZ : %d  PACKETS   PRIX : %d  \n", qtte_rice , qtte_rice * 2500);
                printf("                                                               \n");
                       printf("*********************************************************************\n");
            printf(" TOMATE: %d  PACKETS   PRIX : %d  \n", qtte_tomato , qtte_tomato * 1500);
               printf("                                                               \n");
                      printf("*********************************************************************\n");
            printf("                                                               \n");
        }else if ( choix == 23 || choix == 32 ){
                       printf("                     RECAP DE VOS ACHATS                        \n");
             printf("                                                               \n");
            printf("*********************************************************************\n");
              printf(" HUILE: %d  PACKETS   PRIX : %d  \n", qtte_oil , qtte_oil * 1000);
                printf("                                                               \n");
              printf("*********************************************************************\n");
            printf(" TOMATE: %d  PACKETS   PRIX : %d  \n", qtte_tomato , qtte_tomato * 1500);
              printf("                                                               \n");
           printf("*********************************************************************\n");
            printf("                                                               \n");

            }
    return 0;
    }
