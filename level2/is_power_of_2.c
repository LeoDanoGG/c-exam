// Checks if the argument passed is a ower of 2
// If its a power of 2, it returns 1; if not returns 0

int is_power_of_2(unsigned int n)
{
	unsigned int i = 2, base = 2;
	while (i < n) i *=  base;
	if (i == n) return 1;
	return 0;
}

// #include <stdio.h>
// int main(void)
// {
// 	int r = 32;
// 	return (printf("%d\n", is_power_of_2(r)), 0);
// }