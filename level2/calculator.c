// Performs basic operations
// (a + b, a - b, a * b, a / b, a % b)
// To multiply, use \* as an argument or enclose in quotes "*"
// To divide, use \/ as an argument or enclose in quotes "/"
// If the number of arguments is not 3, it prints only a newline


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

static void my_itoa(long long num)
{
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
	}
	long long n = num;
	if (num > 9)
		my_itoa(num / 10);
	n = num % 10 + '0';
	write(1, &n, 1);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		int num1 = my_atoi(argv[1]), num2 = my_atoi(argv[3]);
		long long result = 0;
		char op = *argv[2];
		if (op == '+') result = num1 + num2;
		else if (op == '-') result = num1 - num2;
		else if (op == '*') result = num1 * num2;
		else if (op == '/') result = num1 / num2;
		else if (op == '%') result = num1 % num2;
		else return (write(1, "\n", 1), 0);
		my_itoa(result);
	}
	return (write(1, "\n", 1), 0);
}