// #include <unistd.h>


int ft_strlen(char *str)
{
    int i;

    i = 0;

    while (str[i] != '\0')
    {
        i++;

    }

    return (i);
}


#include <stdio.h>
int	main(void)
{
	char	*str = "Hello World!";
	int	lenght;
	
	lenght = ft_strlen(str);
	printf("String: %s\n Lenght: %d\n", str, lenght);
}