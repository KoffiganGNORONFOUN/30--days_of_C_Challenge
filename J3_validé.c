#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
  int nbre_mystere ;
  int choix = 0 ;
  int A ;
  int B ;
  int C;

  printf(" ENTRE VOTRE JOUR DE NAISSANCE \n");
  scanf("%d",&A);

    printf(" ENTRE VOTRE MOIS DE NAISSANCE \n");
  scanf("%d",&B);

    printf(" ENTRE VOTRE ANNEE DE NAISSANCE \n");
  scanf("%d",&C);

  nbre_mystere = A + B + C ;
   do {
     printf(" LE NOMBRE DE VOTRE CHOIX \n");
      scanf(" %d",&choix);

      if ( choix > nbre_mystere){
        printf( " NOMBRE PLUS GRAND !");
      }else if ( choix < nbre_mystere ) {
           printf( " NOMBRE PLUS PETIT !");
      }else if ( choix == nbre_mystere ) {
           printf( " BRAVO VOUS AVEZ GAGNE !");
      }
   }while ( choix != nbre_mystere);

    return 0;
}
