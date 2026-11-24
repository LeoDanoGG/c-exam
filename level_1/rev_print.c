/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legomez <legomez@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 18:02:46 by legomez           #+#    #+#             */
/*   Updated: 2026/11/24 18:11:39 by legomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	slen(char *str)
{
	int n = 0;
	while (str[n]) n++;
	return n;
}

int main(int argc, char **argv)
{
	if (argc != 2) return (write(1, "\n", 1), 0);
	int n = slen(argv[1]);
	while (n-- > 0) write(1, &(argv[1][n]), 1);
	write(1, "\n", 1);
	return 0;
}
