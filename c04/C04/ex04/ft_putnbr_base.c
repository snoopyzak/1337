/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaakrab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 16:22:39 by zaakrab           #+#    #+#             */
/*   Updated: 2024/08/04 16:22:41 by zaakrab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *s)
{
	int	l;

	l = 0;
	while (s[l])
		l++;
	return (l);
}

int	is_dup(char *s)
{
	int				i;
	char			t[256];
	unsigned int	c;

	i = 0;
	while (i < 256)
	{
		t[i] = 0;
		i++;
	}
	i = 0;
	while (s[i])
	{
		c = (unsigned char)s[i];
		if (t[c] == 0)
			t[c] = 1;
		else
			return (1);
		i++;
	}
	return (0);
}

int	ft_error(char *b)
{
	int				i;

	i = 0;
	if (is_dup(b) == 1)
		return (1);
	if (ft_strlen(b) < 2)
		return (1);
	while (b[i])
	{
		if (b[i] == '-' || b[i] == '+')
			return (1);
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	n;
	unsigned int	b;

	b = ft_strlen(base);
	if (ft_error(base) == 1)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		n = -nbr;
	}
	else
		n = nbr;
	if (n > b - 1)
	{
		ft_putnbr_base(n / b, base);
		ft_putnbr_base(n % b, base);
	}
	else
	{
		write (1, &base[n], 1);
	}
}
