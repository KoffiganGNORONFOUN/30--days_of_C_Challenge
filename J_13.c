#include <stdio.h>
#include <stdlib.h>




// struct définie pour collecter les infos de chaque produits
      typedef struct {
              int id ;
              char nom[50];
              int quantite ;
              float prix_unit;
        }Produit;

    void ajouter_produit( Produit stock[],int *tailleActuelle);

      void ajouter_produit( Produit stock[],int *tailleActuelle){
          if ( *tailleActuelle > 100){
            printf( "LE STOCKOGE EST PLEIN \n");
          }else
              printf("************************************************\n");
               printf("  \n");
               stock[*tailleActuelle].id = *tailleActuelle + 1 ;
              printf(" ID : %d \n", stock[*tailleActuelle].id );
              printf("************************************************\n");
              printf(" ENTREZ LE NOM DE CE PRODUIT\n");
              printf("************************************************\n");
               printf("  \n");
               scanf(" %s",stock[*tailleActuelle].nom);
               printf("************************************************\n");
                printf("  \n");
               printf(" ENTREZ LA QUANTITE DE CE PRODUIT \n");
               printf("************************************************\n");
                printf("  \n");
               scanf("%d",&stock[*tailleActuelle].quantite);
               printf("************************************************\n");
                printf("  \n");
               printf(" ENTREZ LE PRIX UNITAIRE DE CE PRODUIT \n");
               printf("************************************************\n");
                printf("  \n");
               scanf("%f",&stock[*tailleActuelle].prix_unit);
                printf("  \n");
               printf("PRODUIT AJOUTE AVEC SUCCES \n");
                printf("************************************************\n");
               (*tailleActuelle)++ ;
      }

             // FONCTION QUI AFFICHE TOUS LES PRODUITS DISPONIBLES EN STOCK ET LEURS CARTERISTIQUES
       void afficher_produit( Produit stock[],int tailleActuelle);
      void afficher_produit( Produit stock[],int tailleActuelle){
          for ( int i = 0 ; i < tailleActuelle ; i++){
          printf(" ID : %d    PRODUIT : %s    QUANTITE : %d    PRIX UNITAIRE : %.2f  $ \n", stock[i].id , stock[i].nom , stock[i].quantite , stock[i].prix_unit);
             printf("  \n");

      }
      }



int main()
{
    int choix ;
    // DECLARATION DU TABLEAU DE TYPE PRODUIT POUR STOCKER LES DONNEES DES PRODUITS
    Produit stock[100];
    // COMPTEUR
    int tailleActuelle = 0;

    do {
    printf("************************************************\n");
        printf("  \n");
    printf( " ENTREZ 1 SI VOUS VOULEZ AJOUTER UN PRODUIT OU 2 SI VOUS VOULEZ AJOUTER LE STOCK DISPONIBLE \n");
     printf("************************************************\n");
         printf("  \n");
     scanf("%d",&choix);
          printf("************************************************\n");
       if ( choix == 1){
            // APPEL DE LA FONCTION PERMETTANT D'AJOUTER UN PRODUIT
        ajouter_produit (stock, &tailleActuelle) ;
    }else if ( choix == 2){
        // APPEL DE LA FONCTION PERMETTANT D'AFFICHER LES PRODUITS DISPONIBLES EN STOCK
        afficher_produit (stock, tailleActuelle) ;
    }

    } while( choix != 3);



    return 0;
}
