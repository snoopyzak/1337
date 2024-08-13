/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaakrab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:44:56 by zaakrab           #+#    #+#             */
/*   Updated: 2024/07/24 16:45:00 by zaakrab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	left;
	int	right;
	int	t;

	left = 0;
	right = size - 1;
	while (left < right)
	{
		t = tab[left];
		tab[left] = tab[right];
		tab[right] = t;
		left++;
		right--;
	}
}
