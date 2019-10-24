#include <unistd.h>
//protos
void    print_alpha(char, char);
void    my_put_char(char);    

int    main(void)
{
    char    a;
    char    b;

    a = 'a';
    b = 'f';

    print_alpha(a, b);

    return 0;
}




void    print_alpha(char start, char end)
{
    while(start <= end)
    {
	my_put_char(start);
	start++;
    }
    my_put_char('\n');
}

void    my_put_char(char c)
{
    write(1, &c, 1);
}
