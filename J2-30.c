#include <stdio.h>
#include <stdlib.h>

int main()
 {
    int x 
    char choix [1] ;
      printf(" ENTREZ A  : POUR L'ADDITION  ");
      SCANF("%s", &choix);

       printf(" ENTREZ M  : POUR LA MULTIPLICATION  ");
      SCANF("%s", &choix);

       printf(" ENTREZ S  : POUR LA SOUSTRACTION  ");
      SCANF("%s", &choix);

       printf(" ENTREZ D : POUR LA DIVISION  ");
      SCANF("%s", &choix);
 
        if (choix[0] == 'A' || choix[0] == 'a') {
    printf(" ENTREZ LE NOMBRE REPERE DE VOTRE TABLE : ");
    scanf("%d", &x);
    for (int i = 0; i <= 12; i++) {
        printf("%d + %d = %d\n", x, i, x + i);
    }
      } else if (choix[0] == 'M') {
         printf(" ENTREZ LE NOMBRE REPERE DE VOTRE TABLE : ");
    scanf("%d", &x);
    for (int i = 0; i <= 12; i++) {
        printf("%d * %d = %d\n", x, i, x * i)  ;}
    }
     else if (choix[0] == 'S' || choix[0] == 's') {
          printf(" ENTREZ LE NOMBRE REPERE DE VOTRE TABLE : ");
    scanf("%d", &x);
    for (int i = 0; i <= 12; i++) {
        printf("%d - %d = %d\n", x, i, x - i);
    }
     
   } else if (choix[0] == 'D' || choix[0] == 'd') {
            printf(" ENTREZ LE NOMBRE REPERE DE VOTRE TABLE : ");
    scanf("%d", &x);
    for (int i = 0; i <= 12; i++) {
        printf("%d / %d = %d\n", x, i, x / i);
    }
     }


    return 0; 
}