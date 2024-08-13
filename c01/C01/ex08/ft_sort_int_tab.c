/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaakrab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:45:08 by zaakrab           #+#    #+#             */
/*   Updated: 2024/07/24 16:45:10 by zaakrab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	left;
	int	right;
	int	t;

	left = 0;
	while (left < size - 1)
	{
		right = 0;
		while (right < size - left - 1)
		{
			if (tab[right] > tab[right + 1])
			{
				t = tab[right];
				tab[right] = tab[right + 1];
				tab[right + 1] = t;
			}
			right++;
		}
		left++;
	}
}
