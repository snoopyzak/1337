/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaakrab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:18:24 by zaakrab           #+#    #+#             */
/*   Updated: 2024/08/14 18:30:40 by zaakrab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	do_op(int i, int j, char e)
{
	int	(*op[5])(int, int);

	op[0] = &add;
	op[1] = &subtract;
	op[2] = &multiply;
	op[3] = &divide;
	op[4] = &mod;
	if (e == '+')
		return (op[0](i, j));
	if (e == '-')
		return (op[1](i, j));
	if (e == '*')
		return (op[2](i, j));
	if (e == '/')
		return (op[3](i, j));
	if (e == '%')
		return (op[4](i, j));
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
