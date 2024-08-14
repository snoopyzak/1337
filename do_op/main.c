/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaakrab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:18:24 by zaakrab           #+#    #+#             */
/*   Updated: 2024/08/14 15:18:27 by zaakrab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_div_zero(void)
{
	int		i;
	char	*s;

	s = "Stop : division by zero";
	i = 0;
	while (s[i] != 0)
	{
		write (1, &s[i++], 1);
	}
}

void	ft_mod_zero(void)
{
	int		i;
	char	*s;

	s = "Stop : modulo by zero";
	i = 0;
	while (s[i] != 0)
	{
		write (1, &s[i++], 1);
	}
}

int	do_op(int i, int j, char e)
{
	if (e == '+')
		return (i + j);
	if (e == '-')
		return (i - j);
	if (e == '*')
		return (i * j);
	if (e == '/')
	{
		if (j == 0)
		{
			ft_div_zero();
			return (0);
		}
		return (i / j);
	}
	if (e == '%')
	{
		if (j == 0)
		{
			ft_mod_zero();
			return (0);
		}
		return (i / j);
	}
	return (0);
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		if (av[2][1] != 0)
		{
			ft_putchar('\n');
			return (0);
		}
		ft_putnbr(do_op(ft_atoi(av[1]), ft_atoi(av[3]), av[2][0]));
	}
	ft_putchar('\n');
	return (0);
}
