/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaakrab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:18:24 by zaakrab           #+#    #+#             */
/*   Updated: 2024/08/14 17:58:16 by zaakrab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	do_op(int i, int j, char e)
{
	if (e == '+')
		return (i + j);
	if (e == '-')
		return (i - j);
	if (e == '*')
		return (i * j);
	if (e == '/')
		return (i / j);
	if (e == '%')
		return (i / j);
	else
		return (0);
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		if ((av[2][0] == '/' || av[2][0] == '%')
			&& ft_atoi(av[3]) == 0)
		{
			if (av[2][0] == '/')
				ft_div_zero();
			else
				ft_mod_zero();
		}
		else if (av[2][1] != 0)
			ft_putchar('0');
		else
			ft_putnbr(do_op(ft_atoi(av[1]), ft_atoi(av[3]), av[2][0]));
		ft_putchar('\n');
	}
	return (0);
}
