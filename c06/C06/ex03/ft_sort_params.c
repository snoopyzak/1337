/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaakrab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:16:11 by zaakrab           #+#    #+#             */
/*   Updated: 2024/08/05 13:16:13 by zaakrab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(const char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		write(1, &str[c], 1);
		c++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	int	c;

	c = 0;
	while ((s1[c] == s2[c]) && (s1[c] != '\0') && (s2[c] != '\0'))
		c++;
	return (s1[c] - s2[c]);
}

void	ft_swap(char **a, char **b)
{
	char	*t;

	t = *a;
	*a = *b;
	*b = t;
}

int	main(int argc, const char **argv)
{
	int	c;
	int	d;

	c = 1;
	while (c < argc)
	{
		d = c;
		while (d < argc)
		{
			if (ft_strcmp(argv[c], argv[d]) > 0)
				ft_swap((char **)&argv[c], (char **)&argv[d]);
			d++;
		}
		ft_putstr(argv[c++]);
	}
	return (0);
}
