// Prints the first word of the string given as argument, followed by a newline
// The argument may contain leading spaces
// If the number of arguments is not 1, it prints only a newline

#include <unistd.h> // <io.h> in Windows OS

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int n = 0;
		while (argv[1][n] == ' ') n++;
		while (argv[1][n] && argv[1][n] != ' ')
		{
			write(1, &argv[1][n], 1);
			n++;
		}
	}
	return (write(1, "\n", 1), 0);
}
