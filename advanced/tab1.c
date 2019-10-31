#include <stdio.h>

int    main(void)
{
    int    tab[5];
    int    counter;
    int    i;

    i = 0;
    
    while(i < 5)
    {
	tab[i] = tab[i - 1] + 10;
	printf("tab[%d]-->%d\n", i, tab[i]);
	i++;
    }
    
    return 0;
}
