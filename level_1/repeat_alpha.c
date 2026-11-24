/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legomez <legomez@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 17:35:31 by legomez           #+#    #+#             */
/*   Updated: 2026/11/24 18:00:52 by legomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_letter(char c, int times)
{
	for (size_t i = 0; (int)i < times; i++)
	{
		write(1, &c, 1);
	}
	
}

int main(int argc, char **argv)
{
	if (argc != 2) return 0;

	int n = 0;
	while (argv[1][n])
	{
		if (argv[1][n] >= 'a' && argv[1][n] <= 'z')
			print_letter(argv[1][n], (argv[1][n]) - 'a' + 1);
		else if (argv[1][n] >= 'A' && argv[1][n] <= 'Z')
			print_letter(argv[1][n], (argv[1][n]) - 'A' + 1);
		else write(1, &(argv[1][n]), 1);
		n++;
	}
	write(1, "\n", 1);
	return 0;
}
