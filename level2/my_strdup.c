// Duplicates the string passed as argumment
// Returns a new pointer to the duplicated string
// If the pointer of src is NULL, returns NULL

#include <stdlib.h> // for malloc()

static int	my_strlen(char *str)
{
	if (!str) return 0;
	int n = 0;
	while (*(str++)) n++;
	return n;
}

char    *my_strdup(char *src)
{
	if (!src) return NULL;
	int i = 0;
	char *c = malloc(sizeof(char) * (my_strlen(src) + 1));
	if (!c) return NULL;
	while (src[i])
	{
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return c;
}

// #include <stdio.h>
// int main(void)
// {
// 	char *f = my_strdup("Hello world!");
// printf("%s\n", f);
// 	return (free(f), 0);
// }