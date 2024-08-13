/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaakrab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 14:57:30 by zaakrab           #+#    #+#             */
/*   Updated: 2024/08/10 14:57:31 by zaakrab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

int	ft_calc_size(int size, char **strs, char *sep)
{
	int	total_size;
	int	i;

	total_size = 0;
	total_size += ft_strlen(sep) * (size - 1);
	i = 0;
	while (i < size)
		total_size += ft_strlen(strs[i++]);
	return (total_size);
}

char	*ft_strmake(char *str, int size, char **strs, char *sep)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < size)
	{
		ft_strcpy(&str[j], strs[i]);
		j += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(&str[j], sep);
			j += ft_strlen(sep);
		}
		i++;
	}
	str[j] = 0;
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;

	if (size == 0)
	{
		str = (char *)malloc(1);
		if (str)
			str[0] = 0;
		return (str);
	}
	str = (char *)malloc(sizeof(char) * (ft_calc_size(size, strs, sep) + 1));
	if (!str)
		return (NULL);
	ft_strmake(str, size, strs, sep);
	return (str);
}
