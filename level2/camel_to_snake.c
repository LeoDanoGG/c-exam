// Changes the format style of the string
// Passes from lowerCamelCase to snake_case
// Only prints the format style, does not care about pointers restart
// If the number of arguments is not 1, it prints only a newline

#include <stdlib.h> // for malloc()
#include <unistd.h> // <io.h> in Windows OS

static int	my_strlen(char *str)
{
	if (!str) return 0;
	int n = 0;
	while (*(str++)) n++;
	return n;
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	len = my_strlen(argv[1]);
		char *str = malloc(sizeof(char) * (len  * 2 + 1));
		if (!str) return 0;
		while (*argv[1])
		{
			if (*argv[1] >= 'A' && *argv[1] <= 'Z')
			{
				*str = '_';
				write(1, &(*str), 1);
				str++;
				*str = *argv[1] + 32;
			}
			else *str = *argv[1];
			write(1, &(*str), 1);
			str++;
			argv[1]++;
		}
		free(str);
	}
	return (write(1, "\n", 1), 0);
}