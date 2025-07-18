#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int res;
    char t_isalpha;

    t_isalpha = 'F';
    res = isalpha(t_isalpha);
    printf("result: %i\n", res);
}