#include "libft.h"

int ft_isalpha(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    {
        return (1024);
    }
    else
    {
        return (0);
    }
    
}

/*
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int res;
    char test;

    test = 'F';
    res = isalpha(test);
    printf("result: %i\n", res);
}
*/