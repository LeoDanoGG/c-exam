// Prints the string given as argument in reverse, followed by a newline
// If the number of arguments is not 1, it prints only a newline

#include <unistd.h> // <io.h> in Windows OS

int	slen(char *str)
{
	int n = 0;
	while (str[n]) n++;
	return n;
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int n = slen(argv[1]);
		while (n-- > 0) write(1, &(argv[1][n]), 1);
	}
	return (write(1, "\n", 1), 0);
}
