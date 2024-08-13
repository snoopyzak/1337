/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaakrab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:20:34 by zaakrab           #+#    #+#             */
/*   Updated: 2024/08/05 14:23:18 by zaakrab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	c;

	if (nb < 2)
		return (0);
	i = 1;
	c = 0;
	while (i <= nb)
	{
		if (nb % i == 0)
			c++;
		i++;
	}
	if (c == 2)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	while (!(ft_is_prime(nb)))
	{
		nb++;
	}
	return (nb);
}
