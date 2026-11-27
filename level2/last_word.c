#include <unistd.h> // <io.h> in Windows OS

static int count_words(const char *str)
{
	int count = 0, i = 0;
	while (str[i])
	{
		while (str[i] == ' ') i++;
		if (str[i]) count++;
		while (str[i] && str[i] != ' ') i++;
	}
	return count;
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		int i = 0, count = 0, words = count_words(str);
		while (str[i])
		{
			while (str[i] == ' ') i++;
			if (str[i]) count++;
			if (count == words) break;
			while (str[i] && str[i] != ' ') i++;
			while (str[i] == ' ') i++;
		}
		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	return (write(1, "\n", 1), 0);
}