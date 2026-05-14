#include <stdio.h>
#include <stdlib.h>

int main()
{
     int nbre_decimale ;
     int choix ;
     int tab_binaire[8]={0};
     int i;
     int j ;
     char tab_hexa [6][1]={};
     int tab_hexa2[10] ;

      printf("*********************************************************\n");
     printf(" ENTREZ LE NOMBRE QUE VOUS SOUHAITEZ CONVERTIR \n");
     printf("   \n");
     scanf("%d",&nbre_decimale) ;
      printf("*********************************************************\n");
      printf("   \n");
     printf(" VERS QUEL SYSTEME SOUHAITEZ VOUS CONVERTIR VOTRE NOMBRE ?\n");
      printf("   \n");
     printf("ENTREZ 1 POUR LE SYSTEME BINAIRE OU 2 POUR LE SYSTEME HEXADECIMALE\n");
      printf("   \n");
       scanf("%d",&choix);
        printf("   \n");
         printf("*********************************************************\n");
       if( choix == 1){
          while ( nbre_decimale > 0){
                tab_binaire[i] = nbre_decimale % 2 ;
            nbre_decimale = nbre_decimale / 2 ;
            i++ ;
          } for( i = 7 ; i >= 0 ; i--){
           printf( "%d",tab_binaire[i]);
          }
   printf("\n*********************************************************\n");
       }else if ( choix == 2){
            i = 0 ;
            j = 0 ;
           while( nbre_decimale > 0){
               if( nbre_decimale % 16 == 15) {
                   strcpy(tab_hexa[j]," F") ;
               }else if( nbre_decimale % 16 == 14) {
                 strcpy(tab_hexa[j]," E") ;
             }else if( nbre_decimale % 16 == 13) {
                 strcpy(tab_hexa[j]," D") ;
             } else if( nbre_decimale % 16 == 12) {
                   strcpy(tab_hexa[j],"C") ;
                }else if( nbre_decimale % 16 == 11) {
                    strcpy(tab_hexa[j],"B") ;
                }else if( nbre_decimale % 16 == 10) {
                    strcpy(tab_hexa[j],"A") ;
                }else if( nbre_decimale % 16 <10) {
                 tab_hexa2[i] = nbre_decimale % 16 ;
            } nbre_decimale = nbre_decimale / 16 ;
                     i++;
                     j++;
            }

            } for( j = 5 ; j >= 0; j--){
                printf("%c",tab_hexa[i]);
            } for( i = 9 ; i >=0; i--){
                printf("%d",tab_hexa2[i]);
             }





    return 0;
}
