// Shifts each letter in the string given as argument by one position in the alphabet
// If the letter is 'z' or 'Z', it wraps around to 'a' or 'A'
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
			if (c >= 'a' && c <= 'z') c = (c - 'a' + 1) % 26 + 'a';
			else if (c >= 'A' && c <= 'Z') c = (c - 'A' + 1) % 26 + 'A';
			write(1, &c, 1);
			n++;
		}
	}
	return (write(1, "\n", 1), 0);
}

