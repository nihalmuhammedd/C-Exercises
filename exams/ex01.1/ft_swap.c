#include <unistd.h>

void	ft_swap(int *a, int *b)

{
	int temp;


	temp = *a;
	*a = *b ; 
	*b = temp;

}


#include <stdio.h>
void	ft_swap(int *a, int *b);

int main()
{
	int a = 10;
	int b = 20;

	printf("Before swap: \n" );
	printf("a : %d\n" , a);
	printf("b : %d\n" , b);


	ft_swap(&a , &b);

	printf("After swap: \n");
	printf("a :%d\n " , a);
	printf("b :%d\n" , b);

}
