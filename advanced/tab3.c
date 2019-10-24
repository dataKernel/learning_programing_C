#include <stdio.h>

int    main(void)
{
    const int    TAILLE_MAX_TAB = 5;

    int    tab[TAILLE_MAX_TAB];
    int    i;

    i = 0;
    
    while(i < TAILLE_MAX_TAB)
    {
	tab[i] = (i + 1) * 10;
	printf("tab[%d]-->%d\n", i, tab[i]);
	i++;
    }
    
    return 0;
}
