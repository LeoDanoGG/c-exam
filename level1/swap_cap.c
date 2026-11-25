// Swaps the case of each letter in the string given as argument
// If the number of arguments is not 2, it prints only a newline

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
            if (c >= 'a' && c <= 'z') c -= 32;
            else if (c >= 'A' && c <= 'Z') c += 32;
            write(1, &c, 1);
            n++;
        }
    }
    return (write(1, "\n", 1), 0);
}