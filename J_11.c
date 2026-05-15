#include <stdio.h>
#include <stdlib.h>

int main()
{   int  Y ;


     printf("**********************************************\n");
     printf ("   \n");
   printf(" VEUILLER ENTRER L'ANNEE \n");
       printf ("   \n");
        printf("**********************************************\n");
   scanf("%d", &Y);
       printf ("   \n");
        printf("**********************************************\n");
   if (  Y % 400  == 0 || Y % 4  == 0 || Y % 100  == 0 ) {
         printf("**********************************************\n");
            printf ("   \n");
    printf (" L'ANNEE SAISIE EST BISSEXTILE \n");
       printf ("   \n");
    printf("**********************************************\n");
   } else {
           printf ("   \n");

      printf (" L'ANNEE SAISIE N'EST PAS BISSEXTILE \n");
          printf ("   \n");
           printf("**********************************************\n");
      }

    return 0;
}
