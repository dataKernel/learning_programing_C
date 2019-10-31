#include <stdio.h>

int    main(void)
{
    char    prenom[9] = "lancelot";
    int    i;
    
    i = 0;
    //parsing a string to print it whith output char flux
    while(prenom[i] != '\0') //can use while prenom[i] != O
    {
	printf("prenom[%d]-->%c\n", i, prenom[i]);
	i++;
    }
	
    return 0;
}
