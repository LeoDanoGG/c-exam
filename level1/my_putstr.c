// Prints the string given as argument, followed by a newline
// If the called function receives a NULL pointer, it does nothing

#include <unistd.h> // <io.h> in Windows OS

void	my_putstr(char *str)
{
	if (!str) return ;
	char *c = str;
	while (*c)
	{
		write(1, &(*c), 1);
		c++;
	}
}

int	main(void)
{
	my_putstr("Hello, World!");
	write(1, "\n", 1);
	return (0);
}