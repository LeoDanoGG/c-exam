// Returns the length of the string given as argument
// If the string is NULL, it returns 0

int	my_strlen(char *str)
{
	if (!str) return 0;
	int n = 0;
	while (*(str++)) n++;
	return n;
}

// int	main(void)
// {
// 	char *str = "Hello, World!";
// 	printf("Length of '%s' is: %d\n", str, my_strlen(str));
// 	return (0);
// }