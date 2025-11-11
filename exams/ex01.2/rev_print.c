#include <unistd.h>

char    *ft_rev_print(char *str)
{
    int length = 0;

    while (str[length] != '\0')
        length++;

    while (length > 0)
    {
        length--;
        write(1, &str[length], 1);

    }

    write(1,  "\n", 1);

    return str;

}
