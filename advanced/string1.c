#include <stdio.h>

int    main(void)
{
    //understanding string allocation memory and pointer ref.
    char    tabChar[5] = "toto";
    
    printf("memory adress of tabChar(=tabChar[O])-->%p\n", tabChar);
    printf("tabchar value 2nd elem-->%c\n", *(tabChar + 1));
    printf("1er char -->%c\n", tabChar[0]);
    printf("2er char -->%c\n", tabChar[1]);
    printf("3er char -->%c\n", tabChar[2]);
    printf("4er char -->%c\n", tabChar[3]);
    printf("5er char -->%c\n", tabChar[4]);//end of string (='\0')
    return 0;
}
