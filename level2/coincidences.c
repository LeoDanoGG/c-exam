// Compares two strings and prints the characters that are
// the same in both strings, along with their positions
// If the number of arguments is not 2, it prints only a newline

#include <unistd.h> // <io.h> in Windows OS

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        char *str1 = argv[1], *str2 = argv[2];
        int i = 0, j = 0;
        while (str1[i])
        {
            j = 0;
            while (str2[j] && str1[i] != str2[j]) j++;
            if (str1[i] == str2[j]) write(1, &str1[i], 1);
            i++;
        }
    }
    return (write(1, "\n", 1), 0);
}