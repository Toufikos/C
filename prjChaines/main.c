#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LG 20 //

int main()
{
    //Autre possibilités.
    char nom[LG +1] =  "Yahyaoui", prenom[] = "Toufikos";
    char texte[40 + 1]="\0";

    printf("%s \n", nom);
    printf("%s \n", prenom);

    //fgets(nom, 20, stdin);

    printf("%s \n", nom);

    strcpy(texte , nom);
    printf("Apres affectation : %s \n", texte);

    char *ch = "hello WORLD";
    printf("%s \n", ++ch);

    printf("Saisir votre adresse : \n");
    char adresse[100+1];
    gets(adresse);
    printf("%s \n", adresse);

    // gets()

    char c = 'A';
    putchar(c);

    puts(nom);
    int i=0;

    int lg = strlen(adresse);
    printf("\n lg : %d \n", lg);
    printf("\n");

        while(adresse[i] != '\0')
        {
            putchar(adresse[i++]);
            printf("\n");
        }

    return 0;
}
