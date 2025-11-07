#include <unistd.h>

void	ft_putstr(char*str)

{
	int i = 0;

	while(str[i] != '\0')
	{
		write(1 , &str[i] , 1);
		i++;
	}
}

void	ft_putstr(char *str);

int main()
{
	ft_putstr("Hello World");
	ft_putstr("\n");
	ft_putstr("42 school");
	ft_putstr("\n");
	return 0;
}