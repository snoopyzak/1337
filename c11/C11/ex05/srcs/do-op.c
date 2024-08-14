/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaakrab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 21:38:50 by zaakrab           #+#    #+#             */
/*   Updated: 2024/08/14 21:38:51 by zaakrab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include <unistd.h>

int	operator(int a, char *c, int b)
{
	int	r;
	int	(*op[5])(int, int);

	op[0] = &ft_add;
	op[1] = &ft_sub;
	op[2] = &ft_mul;
	op[3] = &ft_div;
	op[4] = &ft_mod;
	r = 1;
	if (c[0] == '+')
		r = op[0](a, b);
	else if (c[0] == '-')
		r = op[1](a, b);
	else if (c[0] == '*')
		r = op[2](a, b);
	else if (c[0] == '/')
		r = op[3](a, b);
	else if (c[0] == '%')
		r = op[4](a, b);
	return (r);
}

void	do_op(char *n, char *c, char *m)
{
	int	i;
	int	a;
	int	b;
	int	r;

	i = 0;
	r = 1;
	a = ft_atoi(n);
	b = ft_atoi(m);
	if (!(c[0] == '+' || c[0] == '-'
			|| c[0] == '/' || c[0] == '%' || c[0] == '*'))
		write (1, "0", 1);
	else if (c[0] == '/' && b == 0)
		write (1, "Stop : division by zero", 23);
	else if (c[0] == '%' && b == 0)
		write (1, "Stop : modulo by zero", 21);
	else
	{
		r *= (operator(a, c, b));
		ft_putnbr(r);
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	if (ac == 4)
		do_op(av[1], av[2], av[3]);
	return (0);
}
