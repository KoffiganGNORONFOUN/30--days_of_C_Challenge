#include <stdio.h>
#include <stdlib.h>

int main()
{
     int nbre_eleve ;

   printf(" ENTREZ LE NOMBRE D'ELEVE \n");
    scanf("%d", &nbre_eleve);
      if ( nbre_eleve <= 0) {
        printf(" LE NOMBRE D'ELEVE DOIT ETRE SUPPERIEUR A 0\n");
         scanf("%d", &nbre_eleve);
      }
     char nom_eleve [ nbre_eleve][50];
     float note_eleve [ nbre_eleve][4];
     float note_eleve_totale [nbre_eleve] ;
     float moy_eleve [ nbre_eleve];
     float Max_moy ;
      float Min_moy;

     for ( int i = 0 ; i < nbre_eleve ; i++) {
          printf(" NOM DE L'ELEVE : \n") ;
        printf("****************************************************************************************\n");
         printf("                                                                                       \n");
          scanf("%S",&nom_eleve[i]);
           printf("****************************************************************************************\n");
         printf("                                                                                       \n");
         note_eleve_totale[i] = 0 ;
         moy_eleve[i] = 0 ;
        for ( int j = 0 ; j < 4 ; j++) {
            printf(" ENTREZ LA NOTE %d DE L'ELEVE :\n", j + 1);
             scanf("%f",&note_eleve[i][j]);
               if ( note_eleve[i][j] < 0 || note_eleve[i][j] > 20){
                  printf(" LA NOTE NE DOIT ETRE INFERIEURE A 0 NI SUPERIEURE A 20 \n ");
                   scanf("%f",&note_eleve[i][j]);
               }
         printf("                                                                                       \n");
             note_eleve_totale[i] = note_eleve_totale[i] + note_eleve[i][j] ;
             moy_eleve[i] = moy_eleve[i] + (  note_eleve[i][j] / 4);
        }

     }




     for ( int i = 0 ; i < nbre_eleve ; i++){
            printf("                                                                                       \n");
          printf("****************************************************************************************\n");
         printf("                                                                                       \n");
         printf("                                                                                       \n");
        printf(" ELEVE : %S  ****NOTE: %f   ****MOYENNE : %f \n", nom_eleve[i], note_eleve_totale[i],moy_eleve[i]);
       printf("                                                                                       \n");
        printf("                                                                                       \n");
        printf("****************************************************************************************\n");
     }
    return 0;
}
