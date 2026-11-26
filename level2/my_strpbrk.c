// Searches in the first string passed as argument
// If theres is any coincidence betewn both strings returns the pointer

#include <stdlib.h> // for NULL

char	*my_strpbrk(const char *s1, const char *s2)
{
	if (!s1 || !s2) return NULL;
	int i = 0;
	while (*s1)
	{
		i = 0;
		while (s2[i])
		{
			if (*s1 == s2[i]) return (char *)s1;
			i++;
		}
		s1++;
	}
	return NULL;
}

// #include <stdio.h>
// int main(void)
// {
//     char *dd = "Hello world!";
//     char *p = my_strpbrk(dd, ",");
// 	printf("%s\n", p);
//     return (0);
// }