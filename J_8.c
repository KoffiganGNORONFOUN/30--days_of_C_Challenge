#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int main()
{
    long long choix_nbre;
    printf("**************************************************************************\n");
    printf("    \n");
    printf("          ENTRE LE NOMBRE DONT VOUS VOULEZ LA FACTORIELLE \n");
      printf("    \n");
     scanf("%lld",&choix_nbre);
       printf("    \n");
    long long tab ;
    long long i ;
     long long fact = 1 ;
    for ( i = 0;i <choix_nbre ;i++){
        tab = i + 1 ;
        fact = fact * tab;
    }
    printf("**************************************************************************\n");
       printf("    \n");
     printf(" FACTORIEL DE %lld = %lld\n",choix_nbre , fact);
        printf("    \n");
printf("**************************************************************************\n");
    return 0;
    }
