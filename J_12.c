#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char mot[50];
    int i, n, estPalindrome = 1;


    printf("*****************************************\n");
   printf(" DETECTEUR DES MOTS PALINDROME \n");
    printf("     \n");
     printf("*****************************************\n");
      printf("     \n");
    printf("ENTREZ UN MOT :");
    scanf("%s", mot);
     printf("*****************************************\n");

    n = strlen(mot);

    for (i = 0; i < n / 2; i++) {
        if (mot[i] != mot[n - 1 - i]) {
            estPalindrome = 0;
            break;
        }
    }

    if (estPalindrome){
             printf("*****************************************\n");
              printf("     \n");
   printf("%s EST UN PALINDROME !\n", mot);
    printf("*****************************************\n");
    }else{
    printf("*****************************************\n");
    printf("     \n");
    printf("%s  N'EST PAS UN PALINDROME. \n", mot);
     printf("*****************************************\n");

    }

    return 0;
}

