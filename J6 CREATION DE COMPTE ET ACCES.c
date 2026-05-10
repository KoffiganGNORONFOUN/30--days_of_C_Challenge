#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char user_name [50];
    int user_password ;
     int tentative;
     int password ;


     printf ("******************** SOYEZ LE BIENVENUE ********************\n");
 printf("       \n");
  printf("       \n");
     printf("********** VEUILLEZ ENTRER VOTRE NOM D'UTILISATEUR **********\n");
      printf("       \n");
     scanf("%s",&user_name);
     printf("********** VEUILLEZ ENTRER VOTRE MOT DE PASSE **********\n");
      printf("       \n");
     scanf("%d",&user_password);
      printf("       \n");
       printf("       \n");
     printf("******************** BRAVO VOUS ETES MAINTENANT MEMBRE DE LA PLATEFORME ********************\n");
      printf("       \n");
       printf("       \n");

     printf(" CHER(E) %s VEUILLEZ ENTREZ VOTRE MOT DE PASSE POUR ACCEDER AUX CONTENUS DE LA PLATEFORME \n", user_name);
      scanf("%d",&password);
       printf("       \n");
        for ( int i = 3; i >= 1 ; i--) {
            if( password == user_password){
                printf("********** AUTENTIFICATION VALIDEE **********\n");
                printf("       \n");
                printf("       \n");
                printf("********** BIENVENUE DANS LES CONTENUES **********\n");
                 printf("       \n");
                  break ;
            }else if (password != user_password){
                printf("      MOT DE PASSE INVALIDE       \n");
                 printf("       \n");
                 printf("      VEUILLEZ REESSAYER     \n");
                  printf("       \n");
                scanf("%d",&password);
                 printf("       \n");
            }
        }

    return 0;
}
