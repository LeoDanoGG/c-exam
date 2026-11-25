/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legomez <legomez@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 18:13:22 by legomez           #+#    #+#             */
/*   Updated: 2026/11/24 18:59:13 by legomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <io.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int		rotate = 13, n = 0;
		char	c;

		while (argv[1][n])
		{
			c = argv[1][n];
			if (c >= 'a' && c <= 'z')
				c = (c - 'a' + rotate) % 26 + 'a';
			else if (c >= 'A' && c <= 'Z')
				c = (c - 'A' + rotate) % 26 + 'A';
			write(1, &c, 1);
			n++;
		}
	}
	return (write(1, "\n", 1), 0);
}

