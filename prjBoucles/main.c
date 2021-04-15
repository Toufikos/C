#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cpt=0,val=0;
    long som=10;

    for(cpt=0, som=0; cpt < 3; cpt++, val++)
    {
        som += cpt;
    }
        printf(" Somme : %ld \n val : %d", som, val);


     // ********************* //

    cpt=0;

    while (cpt < 5)
    {
        printf("\n Saisir une valeur positive \n");
        scanf("%d", &val);

        if (val < 0)
        {
            printf("Positif svp \n");
            continue;
        }

        som+=val;
        if (som > 100)
            break;

        cpt++;
    }
        printf("\n Somme : %ld", som);
}
