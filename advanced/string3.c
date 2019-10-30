#include <stdio.h>

int    main(void)
{
    const int    TAILLE_TAB_MONSTRE = 7;
    char    monstre[TAILLE_TAB_MONSTRE] = "monstre";
    int    i;
    
    i = 0;

    while(i < TAILLE_TAB_MONSTRE)
    {
	printf("monstre? --> %c", *monstre);
	i++;
    }

        
    return 0;
}
