// Prints the numbers from 1 to 100
// For multiples of 3 prints "ping" instead of the number
// For the multiples of 5 prints "pong"
// For numbers which are multiples of both 3 and 5, it prints "pingpong"

#include <unistd.h> // <io.h> in Windows OS

int main(void)
{
	char c = '0';
	for (size_t i = 1; i <= 100; i++)
	{
		if (i % 15 == 0) write(1, "pingpong", 8);
		else if (i % 3 == 0) write(1, "ping", 4);
		else if (i % 5 == 0) write(1, "pong", 4);
		else
		{
			if (i < 9)
			{
				c = i + '0';
				write(1, &c, 1);
			}
			else
			{
				c = (i / 10) + '0';
				write(1, &c, 1);
				c = (i % 10) + '0';
				write(1, &c, 1);
			}
		}
		write(1, "\n", 1);
	}
	return 0;
}
