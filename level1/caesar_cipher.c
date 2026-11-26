// Shifts each letter in the string given as argument by a number of positions in the alphabet
// The number of positions is given as the second argument
// If the letter is 'z' or 'Z', it wraps around to 'a' or 'A'
// If the number of arguments is not 2, it prints only a newline

#include <unistd.h> // <io.h> in Windows OS

static int	my_atoi(char *str)
{
	int	n = 0, sign = 1;
	if (*str == '+') str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-') sign = -1;
		if (str[1] == '-' || str[1] == '+') return 0;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	return n * sign;
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int		rotate = my_atoi(argv[2]), n = 0;
		char	c = '0';
		while (argv[1][n])
		{
			c = argv[1][n];
			if (c >= 'a' && c <= 'z') c = (c - 'a' + rotate) % 26 + 'a';
			else if (c >= 'A' && c <= 'Z') c = (c - 'A' + rotate) % 26 + 'A';
			write(1, &c, 1);
			n++;
		}
	}
	return (write(1, "\n", 1), 0);
}

