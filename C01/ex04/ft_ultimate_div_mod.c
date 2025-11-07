#include <unistd.h>
void	ft_ultimate_div_mod(int *a ,int *b)
{
	int temp_div = *a / *b;
	int temp_mod = *a % *b;


	*a = temp_div;
	*b = temp_mod;

}


#include <stdio.h>

void	ft_ultimate_div_mod(int*a , int*b);

int main()
{
	int divident = 17;
	int divisor = 5;

	printf("Before; a=%d , b =%d\n", divident , divisor);

	ft_ultimate_div_mod(&divident , &divisor);
	printf("After: a = %d , b = %d\n" , divident , divisor);
	return 0;
	
}