#include <stdio.h>

int    main(void)
{
    //constante taille max tab
    const int    TAILLE_MAX_SIZE = 5;

    int    tab[TAILLE_MAX_SIZE];
    int    valueTab;
    int    i;

    valueTab = 10;
    i = 0;

    while(i < TAILLE_MAX_SIZE)
    {
	tab[i] = valueTab;
	printf("tab[%d]-->%d\n", i, tab[i]);
	valueTab += 10;
	i++;
    }
    
    
    return 0;
}
