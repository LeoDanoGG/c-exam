/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legomez <legomez@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 16:33:37 by legomez           #+#    #+#             */
/*   Updated: 2026/11/24 16:45:52 by legomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int n = 0;
	if (argc == 2)
	{
		while (argv[1][n] == ' ') n++;
		while (argv[1][n] && argv[1][n] != ' ')
		{
			write(1, &argv[1][n], 1);
			n++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
