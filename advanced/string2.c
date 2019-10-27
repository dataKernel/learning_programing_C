#include <stdio.h>

int    main(void)
{
    char    prenom[8] = "lancelot";
    int    i;
    
    i = 0;
    //parsing a string to print it whith output char flux
    while(i != 9)
    {
	printf("prenom[%d]-->%c\n", i, prenom[i]);
	i++;
    }
	
    return 0;
}
