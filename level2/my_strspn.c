// Returns the length of the string given as argument
// If there is one char from the second string, it stops
// If the string is NULL, it returns 0

#include <stdlib.h>

size_t	my_strcspn(const char *s, const char *reject)
{
	size_t n = 0, j = 0;
	while (s[n])
	{
		j = 0;
		while (reject[j])
		{
			if (s[n] == reject[j]) return n;
			j++;
		}
		n++;
	}
	return n;
}

// #import <stdio.h>
// int main(void)
// {
// 	return (printf("%zu\n", my_strcspn("Hola, mundo!", ",! ")), 0);
// }