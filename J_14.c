#include <stdio.h>
#include <stdlib.h>
#include <string.h>



//CETTE FONCTION SERVIRA A DECHFFRER LES TEXTES AVANT L'AFFICHAGE
void chiffrer(char texte[]){
      //I EST UN COMPTEUR
    int i = 0;
    while(texte[i] != '\0'){
        if(texte[i] >= 'a' && texte[i] <= 'z'){
                // CHIFFRAGE DES MINUSCULES
            texte[i] = ((texte[i] - 'a' - 3 ) % 26) + 'a';
        }else if (texte[i] >= 'A' && texte[i] <= 'Z' );{
            // CHIFFRAGE DES MANUSCULES
        texte[i] = ((texte[i] - 'A'+ 3) % 26) + 'A';

        }
        i++;
    }
}

//CETTE FONCTION SERVIRA A DECHIFFRER LES TEXTES AVANT L'AFFICHAGE

void dechiffrer(char texte[]){
    //I EST UN COMPTEUR
    int i = 0;
    while(texte[i] != '\0'){
        if(texte[i] >= 'a' && texte[i] <= 'z'){
                 // CHIFFRAGE DES MINUSCULES
            texte[i] = ((texte[i] - 'a' - 3 + 26) % 26) + 'a';
        }else if (texte[i] >= 'A' && texte[i] <= 'Z'){
        // CHIFFRAGE DES MANUSCULES
        texte[i] = ((texte[i] - 'A' - 3 + 26) % 26) + 'A' ;

        }
        i++;
    }
}


   // FONCTION SERVANT A SAISIR DU TEXTE DANS LE JOURNAL INTIME
 void saisirjournal() {
FILE *fichier = fopen("journal.txt","a");//JE L'AI FAIS AINSI POUR ENREGISTRER LES TEXTES SUR LE DISQUE DURE
        if(fichier == NULL){
            printf("ERREUR LORS DE L'OUVERTURE DU JOURNAL \n");
            return;
        }
        char note[300];
        printf("COMMENCER VOTRE SAISIE DU JOUR\n");
          scanf(" %[^\n]",note);
          chiffrer(note);
          fprintf(fichier,"%s\n",note);

          printf("[Bravo] TEXTE SAUVEGARDE AVEC SUCCES\n");
            fclose(fichier);
    }



// FONCTION SERVANT A AFFICHER LES TEXTES SAISIES ULTERIEUREMENT
 void lire_journal(){
        FILE *fichier = fopen("journal.txt","r");
        if(fichier == NULL){
            printf("LE JOURNAL EST VIDE OU N'EXISTE PAS ENCORE.\n");
            return;
        }
        char ligne[300];
         printf("************************************************\n");
         printf("  \n");
        printf("               TON JOURNAL INTIME\n");
         printf("  \n");
          printf("************************************************\n");
           printf("  \n");
          while(fgets(ligne,sizeof(ligne),fichier) != NULL) {
                int j = 0 ;
                // AJUSTEMENT DU TEXTE A AFFICHER
          while(ligne[j] != '\0'){
            if(ligne[j] == '\n' || ligne[j] == '\r'){
                ligne[j] = '\0';
                break;
            }
            j++;
          }
            dechiffrer(ligne);
            printf("- %s",ligne);
          }
          fclose(fichier);
    }

int main()
{
    int choix ;

    do{
             printf("  \n");
            printf("************************************************\n");
    printf("  \n");
        printf(" \n QUE VOULEZ VOUS EFFECTUER \n");
         printf("  \n");
        printf("SAISIR DES LIGNES DANS VOTRE JOURNAL ENTREZ 1 \n");
         printf("  \n");
        printf("AFFICHER LES PAGES QUE SAISIES ULTERIEUREMENT ENTREZ 2 \n");
         printf("  \n");
           printf("************************************************\n");
            printf("  \n");
         scanf("%d",&choix);
           printf("************************************************\n");
          if(choix == 1 ){
                //APPEL DE LA FONCTION QUI PERMET DE SAISIR DU TEXTE
             saisirjournal();
             break;
          }else if ( choix == 2){
              //APPEL DE LA FONCTION QUI PERMET D'AFFICHER LES TEXTE SAISIES
              lire_journal();
          }
    } while( choix == 1 || choix == 2 );


    return 0;
}
