/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legomez <legomez@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 16:23:28 by legomez           #+#    #+#             */
/*   Updated: 2026/11/25 16:23:28 by legomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <io.h>

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
        if (!contains) return (write(1, str, n), write(1, "\n", 1), 0);
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