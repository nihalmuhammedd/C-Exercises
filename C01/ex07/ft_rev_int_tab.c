#include <unistd.h>

void    ft_rev_int_tab(int*tab , int size)
{

    int i =0;
    int temp;


    while(i <= size/2)
    {
        temp = tab[i];
        tab[i] = tab[size - 1 - i];
        tab[size - 1 - i] = temp;
        i++;
    }

}


#include <stdio.h>
void    ft_rev_int_tab(int*tab , int size);

void    print_array(int*arr , int size)

{
    int i = 0;
    while(i < size)
    {
        printf("%d" , arr[i]);
        i++;

    }
    printf("\n");
}


int main()
{

    int array[] = {1,2,3,4,5};
    int size = 5;


    printf("Before:");
    print_array(array, size);

    ft_rev_int_tab(array, size);
    printf("After:");
    print_array(array, size);

    return 0;

}

