#include <stdlib.h>

void    my_put_char(char c)
{
    write(1, &c, 1);
}
