// Converts a string into a integer
// The string may be a negative number

int	my_atoi(char *str)
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

// #include <stdio.h>
// int main(void)
// {
// 	return (printf("%d\n", my_atoi("123")), 0);
// }