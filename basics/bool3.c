#include <stdio.h>

int    main(void)
{
    int    a;
    int    b;
    int    c;
    

    a = b = c = 42;

    if(!(a == 42)//si a ne vaut pas 42 
       || (b >= 42))//ou b est superieur ou egal a 42
	printf("true");
    else
	printf("false");

    return 0;
}
