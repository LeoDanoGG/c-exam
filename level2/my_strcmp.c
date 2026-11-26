// Compares two strings and returns the difference
// If both has the same conteng returns 0
// If the first string is smaller than the second returns -n
// If the second string is smaller than the first returns n
// It is assumed that both strings exist for the function call

int    my_strcmp(char *s1, char *s2)
{
	char *src = s1, *cmp = s2;
	while (*src && *src == *cmp)
	{
		src++;
		cmp++;
	}
	return (int)(*src - *cmp);
}

// #include <stdio.h>
// int main (void)
// {
// 	printf("%d\n", my_strcmp("Hello world", "Hello world!"));
// 	return 0;
// }