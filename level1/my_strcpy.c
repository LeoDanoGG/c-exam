// Copies all the string pointed to s1 to the buffer pointed to s2
// If either s1 or s2 is NULL, it returns NULL

#include <stdio.h> // for printf

char    *my_strcpy(char *s1, char *s2)
{
	if (!s1 || !s2) return NULL;
	int n = 0;
	while (s1[n])
	{
		s2[n] = s1[n];
		n++;
	}
	s2[n] = '\0';
	return s2;
}

// int	main(void)
// {
// 	char s1[] = "Hello, World!";
// 	char s2[50];

// 	my_strcpy(s1, s2);
// 	printf("Copied string: %s\n", s2);
// 	return (0);
// }