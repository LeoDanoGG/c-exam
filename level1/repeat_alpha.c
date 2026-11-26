// Prints the string given as argument, followed by a newline
// For each letter, it prints each one repeated the number
// of times equal to its position on the alphabet
// If the number of arguments is not 1, it prints only a newline

#include <unistd.h> // <io.h> in Windows OS

void	print_letter(char c, int times)
{
	for (size_t i = 0; (int)i < times; i++)
	{
		write(1, &c, 1);
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char c = '0';
		int n = 0;
		while (argv[1][n])
		{
			c = argv[1][n];
			if (c >= 'a' && c <= 'z') print_letter(c, (c) - 'a' + 1);
			else if (c >= 'A' && c <= 'Z') print_letter(c, (c) - 'A' + 1);
			else write(1, &c, 1);
			n++;
		}
	}
	return (write(1, "\n", 1), 0);
}
