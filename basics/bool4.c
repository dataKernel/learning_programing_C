#include <stdio.h>

int    error_test(int);

int    main(void)
{
    //error code
    const int    ERRORCODE1 = 1;
    //error status
    int    resultError = 0;

    resultError = error_test(ERRORCODE1);
    printf("%d", resultError);

    return 0;
}


int    error_test(int error)
{
    if(!error)//si n'a pas d'erreur donc 1 != 0 --> 0 --> faux
	return 0;
    else
	return 1;
}
