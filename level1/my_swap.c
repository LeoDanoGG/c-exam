// Swaps the values of two integers using pointers

#include <stdio.h>

void	my_swap(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

int	main(void)
{
	int a = 5, b = 10;

	printf("Before swap: a = %d, b = %d\n", a, b);
	my_swap(&a, &b);
	printf("After swap: a = %d, b = %d\n", a, b);
	return (0);
}