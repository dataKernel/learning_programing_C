#include <stdio.h>

int    add(int, int);

int    main(void)
{
    int    a;
    int    b;
    int    result;

    a = 40;
    b = 2;
    result = add(a, b);
    printf("resultat-->%d\n", result);

    return 0;
}

int    add(int nbr1, int nbr2)
{
    int    result;
    
    result = nbr1 + nbr2;
    return result;
}
