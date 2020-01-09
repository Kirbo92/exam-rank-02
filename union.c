/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 13:38:41 by migferna          #+#    #+#             */
/*   Updated: 2020/01/09 14:05:30 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int used[255];
	int it1, it2;

	if (argc == 3)
	{
		it1 = 1;
		while (it1 < argc)
		{
			it2 = 0;
			while (argv[it1][it2])
			{
				if (!used[(unsigned char)argv[it1][it2]])
				{
					used[(unsigned char)argv[it1][it2]] = 1;
					ft_putchar(argv[it1][it2]);
				}
				it2++;
			}
			it1++;
		}
	}
	ft_putchar('\n');
	return (0);
}
