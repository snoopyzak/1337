/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaakrab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 21:38:31 by zaakrab           #+#    #+#             */
/*   Updated: 2024/08/14 21:38:32 by zaakrab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	is_sort;

	is_sort = 1;
	i = 0;
	while (i < length - 1 && is_sort)
	{
		if ((*f)(tab[i], tab [i + 1]) < 0)
			is_sort = 0;
		i++;
	}
	if (is_sort != 1)
	{
		is_sort = 1;
		i = 0;
		while (i < length - 1)
		{
			if ((*f)(tab[i], tab[i + 1]) > 0)
				return (0);
			i++;
		}
	}
	return (1);
}
