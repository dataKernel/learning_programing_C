#include <stdio.h>

int    main(void)
{
    int    a;
    int    b;

    a = 10;
    b = 20;
    
    //is not a < b -> so its not false, so true :)
    if(!(a>b))
	printf("ok");
    else
	printf("not ok");


    return 0;
}
