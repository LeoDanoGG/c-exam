// Prints the letters in reverse order based on their position
// in the alphabet, similar to a Gaussian permutation
// The left index is swapped with the right index in equal pairs
// Example a <=> z, b <=> y, c <=> x, ...
// If the number of arguments is not 1, it prints only a newline

#include <unistd.h> // <io.h> in Windows OS

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int n = 0;
		char c = '0';
		while (argv[1][n])
		{
			c = argv[1][n];
			if (c >= 'a' && c <= 'z') c = 'z' - (c - 'a');
			else if (c >= 'A' && c <= 'Z') c = 'Z' - (c - 'A');
			write(1, &c, 1);
			n++;
		}
	}
	return (write(1, "\n", 1), 0);
}