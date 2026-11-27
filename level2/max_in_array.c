int max(int* tab, unsigned int len)
{
	int curr = tab[0], i = 0;
	while ((unsigned int)i < len)
	{
		if (curr < tab[i]) curr = tab[i];
		i++;
	}
	return curr;
}

// #include <stdio.h>
// int main(void)
// {
// 	int d[] = {2, 5, 8, -1};
// 	return (printf("%d\n", max(d, 4)), 0);
// }
