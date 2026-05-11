#include <stdio.h>
#include <stdlib.h>



// STRUCTURE DE BASE POUR LA SAISIE DES DONNEES DES ACHATS .
     typedef struct  {
     char nom[50];
     float prix;
     int quantite;
   } produit ;

 // FONCTION POUR LA SAISIE DES DONNEES DES ACHATS .

       void saisie_donnee_produit( produit tab [] , int);

        void saisie_donnee_produit(  produit tab [] , int nbre_prod ){

             for ( int i = 0 ; i < nbre_prod ; i++){


                printf("  ENTREZ LE NOM DU PRODUIT : %d\n", i+1);
                   printf("   \n");
                  scanf("%s", tab[i].nom);
                     printf("   \n");

                  printf(" ENTRER LE PRIX DU PRODUIT : %d \n", i+1);
                     printf("   \n");
                    scanf("%f", &tab[i].prix);
                      if(tab[i].prix < 0  ){
                             printf("   \n");
                        printf(" LE PRIX NE DOIT PAS ETRE INFERIEUR A 0 \n");
                       printf("   \n");
                        printf(" VEUILLEZ REESSAYER\n");
                         printf("   \n");
                         scanf("%f", &tab[i].prix);
                      }
                       printf("   \n");

                    printf(" ENTREZ LA  QUANTITE DU  PRODUIT : %d\n",i+1);
                       printf("   \n");
                      scanf("%d", &tab[i].quantite);
                        if(tab[i].quantite < 0  ){
                             printf("   \n");
                        printf(" LA QUANTITE NE DOIT PAS ETRE INFERIEUR A 0 \n");
                       printf("   \n");
                        printf(" VEUILLEZ REESSAYER\n");
                         printf("   \n");
                         scanf("%d", &tab[i].quantite);
                         printf("   \n");}



                }
                }
 // FONCTION POUR L'AFFICHAGE DE LA FACTURE  .

     void affiche_facture( produit tab [] , int);
      void affiche_facture( produit tab [] , int nbre_prod) {

        printf("*******************************************************************************\n");
        printf("   \n");
        printf("                   *************** RECU ***************\n");
         printf("   \n");
           float TOTAUX = 0 ;
           float  TOTAL = 0 ;
           for( int i = 0 ; i < nbre_prod ; i++){

            TOTAL = tab[i].prix * tab[i].quantite ;
             TOTAUX = TOTAUX + TOTAL ;
            printf("***** PRODUIT %d : %s  \n",i+1 ,tab[i].nom);
             printf("   \n");
               printf("   \n");
            printf("***** PRIX : %.2f  \n", tab[i].prix);
            printf("   \n");
              printf("   \n");
            printf("***** QUANTITE : %d  \n", tab[i].quantite);
                 printf("   \n");
                   printf("   \n");
            printf("***** TOTAL : %.2f  \n", TOTAL);
              printf("   \n");

                  printf("*******************************************************************************\n");
                 printf("   \n");
           }
                          printf("***** TOTAL GENERALE  : %.2f  \n", TOTAUX);
                printf("   \n");
                 printf("   \n");
                 printf(" MERCI POUR VOTRE CONFIANCE ET A BIENTOT \n");
                    printf("   \n");
                 printf("*******************************************************************************\n");
      }


int main()
{

    int nbre_prod ;

printf("*******************************************************************************\n");
    printf(" VEULLEZ ENTRER LES DONNEES DE L'OPERATION \n");
   printf("   \n");
    printf(" ENTREZ LE NOMBRE DE PRODUIT ACHETE \n") ;
     printf("   \n");
    scanf("%d",&nbre_prod);

    produit tab[nbre_prod];

    // L'APPEL DE LA FONCTION DE LA SAISIE DES DONNEES .

     saisie_donnee_produit ( tab,nbre_prod);

     // L'APPEL DE LA FONCTION D'AFFICHAGE DE LA FACTURE .
    affiche_facture( tab ,  nbre_prod) ;

    return 0;
}

