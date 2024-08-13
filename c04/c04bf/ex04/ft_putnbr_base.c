/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaakrab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 11:58:04 by zaakrab           #+#    #+#             */
/*   Updated: 2024/08/01 11:59:12 by zaakrab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= ' ')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i > 1);
}

void	covert_base_print(int nbr, char *base, int base_len)
{
	char	result[32];
	int		i;

	if (nbr == 0)
		ft_putchar(base[0]);
	i = 0;
	while (nbr)
	{
		if (nbr < 0)
			result[i++] = base[-(nbr % base_len)];
		else
			result[i++] = base[nbr % base_len];
		nbr /= base_len;
	}
	while (--i >= 0)
		ft_putchar(result[i]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	if (!valid_base(base))
		return ;
	base_len = 0;
	while (base[base_len])
		base_len++;
	if (nbr < 0)
		ft_putchar('-');
	if (nbr == -2147483648)
	{
		covert_base_print(nbr / base_len, base, base_len);
		covert_base_print(-(nbr % base_len), base, base_len);
	}
	else
		covert_base_print(nbr, base, base_len);
}
/*int	main(void)
{
	char	decimal[] = "0123456789";
	char	binary[] = "01";
	char	hex[] = "0123456789abcdef";
	char	octale[] = "poneyvif";

	ft_putnbr_base(42, decimal);
	ft_putchar('\n');
	ft_putnbr_base(42, binary);
	ft_putchar('\n');
	ft_putnbr_base(42, hex);
	ft_putchar('\n');
	ft_putnbr_base(42, octale);
	ft_putchar('\n');

	return (0);
}*/
