#include <unistd.h>


void    ft_ft(int *nbr)
{
	*nbr = 42;

}

#include <stdio.h>

void ft_ft(int *nbr);

int main()
{
	int x = 0;
	printf("Before: %d/n" , x);

	ft_ft(&x);
	printf("After: %d/n", x);
	return(0);

}
