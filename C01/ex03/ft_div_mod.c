#include <stdio.h>

void	ft_div_mod(int a, int b , int *div , int *mod)

{
	*div = a / b;
	*mod = a % b;

}

void	ft_div_mod(int a, int b , int *div , int *mod);

int main()

{
	int x = 10;
	int y = 3;
	int quotiant;
	int remainder;

	ft_div_mod(x , y, &quotiant, &remainder);

	printf("%d/%d = %d remainder = %d\n" , x , y , quotiant, remainder);
	return 0 ;

}