/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 11:36:09 by migferna          #+#    #+#             */
/*   Updated: 2020/01/09 13:33:26 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_repeat(char *str, char c, unsigned int it)
{
	unsigned int	it2;

	it2 = 0;
	while(it2 < it)
	{
		if (str[it2] == c)
			return (1);
		it2++;
	}
	return (0);
}

void	ft_iter(char *s1, char *s2)
{
	unsigned int it1;
	unsigned int it2;

	it1 = 0;
	while (s1[it1])
	{
		if (ft_repeat(s1, s1[it1], it1) == 0)
		{
			it2 = 0;
			while (s2[it2] != '\0')
			{
				if (s2[it2] == s1[it1])
				{
					write(1, &s1[it1], 1);
					break ;
				}
				it2++;
			}
		}
		it1++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_iter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
