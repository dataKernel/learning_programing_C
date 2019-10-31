#include <stdio.h>

int    main(void)
{
    int    counter;
    
    counter = 1;
    for(int i = 10; i <= 100; i += 10)
    {
	printf("[iteration %d] -->%d\n", counter, i);
	counter++;
    }

    return 0;
}
