/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legomez <legomez@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 16:47:20 by legomez           #+#    #+#             */
/*   Updated: 2026/11/24 16:59:33 by legomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(void)
{
	char c = '0';
	for (size_t i = 1; i <= 100; i++)
	{
		if (i % 5 == 0) write(1, "buzz", 4);
		else if (i % 3 == 0) write(1, "fizz", 4);
		else if (i % 3 == 0 && i % 5 == 0) write(1, "fizzbuzz", 8);
		else
		{
			if (i < 9)
			{
				c = i + '0';
				write(1, &c, 1);
			}
			else
			{
				c = (i / 10) + '0';
				write(1, &c, 1);
				c = (i % 10) + '0';
				write(1, &c, 1);
			}
		}
		write(1, "\n", 1);
	}
	return 0;
}
