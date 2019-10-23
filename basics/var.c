#include <stdlib.h>
#include <unistd.h>

void    my_put_char(char);

int    main(void)
{

    int    a;
    int    b;
    int    result;
    
    a = 5;
    b = 1;
    result = b + a;
    
    my_put_char(result + '0');

    return 0;
}

void    my_put_char(char c)
{
    write(1, &c, 1);
}

