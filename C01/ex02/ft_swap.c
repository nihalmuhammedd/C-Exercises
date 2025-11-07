#include <unistd.h>

void    ft_swap(int*a , int*b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}

#include <stdio.h>
void	ft_swap(int*a , int*b);

int main()
{
	int a = 10;
	int b = 30;

	printf("Before swap: a = %d , b = %d\n" , a , b);

	ft_swap(&a , &b);
	printf("After swap: a = %d , b = %d\n" , a , b);

	return 0;