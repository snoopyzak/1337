/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaakrab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:18:06 by zaakrab           #+#    #+#             */
/*   Updated: 2024/08/14 18:18:07 by zaakrab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *a, char *b)
{
	while (*a && *b && *a == *b)
	{
		a++;
		b++;
	}
	return (*a - *b);
}

void	ft_sort_string_tab(char **tab)
{
	int		(*f)(char *, char *);
	char	*tmp;
	int		i;
	int		j;

	if (!tab)
		return ;
	i = 0;
	f = &ft_strcmp;
	while (tab[i])
	{
		j = i + 1;
		while (tab[j])
		{
			if (f(tab[i], tab[j]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
