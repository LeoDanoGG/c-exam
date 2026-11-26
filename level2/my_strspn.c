// Counts the length of the first segment of the string given as argument
// that consists entirely of characters from the second string
// If there isn't any char from the second string, it stops

#include <stdlib.h>

size_t	my_strspn(const char *s, const char *accept)
{
    size_t n = 0, j = 0;
	while (s[n])
	{
		j = 0;
		while (accept[j] && s[n] != accept[j]) j++;
		if (!accept[j]) return n;
		n++;
	}
	return n;
}

#include <stdio.h>
int main(void)
{
    return (printf("%zu\n", my_strspn("Hola, mundo!", "Hlo")), 0);
}