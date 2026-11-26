// Replaces all occurrences of a character in a string with another character
// If the character to be replaced is not found, it prints the original string
// If the number of arguments is not 3, it prints only a newline

#include <unistd.h> // <io.h> in Windows OS

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        char *str = argv[1];
        char search = argv[2][0], replace = argv[3][0];
        int n = 0, contains = 0;
        while (str[n])
        {
            if (str[n] == search) contains = 1;
            n++;
        }
        if (!contains)
        {
            write(1, str, n);
            return (write(1, "\n", 1), 0);
        }
        n = 0;
        while (str[n])
        {
            if (str[n] == search) str[n] = replace;
            write(1, &str[n], 1);
            n++;
        }
    }
    return (write(1, "\n", 1), 0);
}