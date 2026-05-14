#include <stdio.h>
#include <stdlib.h>


int main()

{
      float max_prix;
    int nbre_prod ;
     printf(" ENTRER LE NOMBRE DE PRODUITS ACHETES \n");
      printf("  \n");
     scanf("%d",&nbre_prod);
      printf("  \n");


    char  nom_tri [nbre_prod][50] ;
    char nom_prod [nbre_prod][50];
    float prix_prod [nbre_prod];

    for (int i = 0;i<nbre_prod ; i++){
        printf(" VEUILLER ENTRER LE NOM DU PRODUIT %d ", i + 1);
         printf("  \n");

          scanf("%s",&nom_prod[i]);
           printf("  \n");
            printf(" VEILLER ENTRER LE PRIX DU PRODUIT %d \n", i + 1);
                printf("  \n");
            scanf("%d",&prix_prod[i]);
             printf("  \n");
     }

     for( int i = 0; i<nbre_prod ; i++){
        if ( prix_prod[i] >= prix_prod[i + 1]){
            max_prix  = prix_prod[i];
             prix_prod[i] = prix_prod[i + 1];
            prix_prod[i] = max_prix ;

              strncpy (nom_tri[i] , nom_prod[i + 1],49) ;
               strncpy ( nom_prod[i + 1], nom_prod[i],49 );
                strncpy(nom_prod[i] ,nom_tri[i],49);

        }else if ( prix_prod[i] < prix_prod[i + 1])
             max_prix = prix_prod[i + 1] ;
             prix_prod[i] = prix_prod[i]  ;

           for( int i = 0;i<nbre_prod ; i++){
              printf(" NOM DU PRODUIT : %s   PRIX : %f \n",nom_prod[i], prix_prod[i]);
           printf("  \n");

           }

}

    return 0;
}
