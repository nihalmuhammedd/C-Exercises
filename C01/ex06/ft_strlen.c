#include <unistd.h>

int    ft_strlen(char *str)
{
	int length = 0;

	while(str[length]!='\0')
	{
		length++;
	}
	return(length);
}

#include <stdio.h>

int	ft_strlen(char *str);

int main()
{
	printf("Length of 'Hello' : %d\n", ft_strlen("Hello"));
	return 0;
}
