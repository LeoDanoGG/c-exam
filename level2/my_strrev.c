// Reverse a string in place
// Swaps the first character with the last, and so on until the middle
// Its simmilar to a Gaussian sum, but swaps characters
// If the string is NULL, it returns NULL

#include <stdlib.h> // for NULL

static int slen(char *str)
{
    int i = 0;
    while (str[i]) i++;
    return i;
}

char    *my_strrev(char *str)
{
    if (!str) return NULL;
    int i = 0, j = slen(str) - 1;
    char tmp = '0';
    while (str[i] && i < j)
    {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        i++;
        j--;
    }
    return str;
}

// #include <stdio.h>
// int main(void)
// {
//     char str[] = "Hello, World";
//     char *result = my_strrev(str);
//     return (printf("%s\n", result), 0);
// }