/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaakrab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:19:55 by zaakrab           #+#    #+#             */
/*   Updated: 2024/08/05 14:20:08 by zaakrab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

int	ft_sqrt(int nb)
{
	int	maxsqrti;
	int	i;

	maxsqrti = 46340;
	i = 0;
	while (i <= maxsqrti + 1)
	{
		if (ft_recursive_power(i, 2) == nb)
			return (i);
		i++;
	}
	return (0);
}
