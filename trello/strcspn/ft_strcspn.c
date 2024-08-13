/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 10:18:29 by mmbatha           #+#    #+#             */
/*   Updated: 2018/07/10 10:52:12 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char			*ft_strchr(const char *str, int firstc)
{
	while (*str)
	{
		if (*str == (char)firstc)
			return ((char *)str);
		str++;
	}
	if (*str == (char)firstc)
		return ((char *)str);
	return (NULL);
}

size_t			ft_strcspn(const char *s, const char *reject)
{
	size_t ret;

	ret = 0;
	while (*s)
	{
		if (ft_strchr(reject, *s))
			return (ret);
		else
		{
			s++;
			ret++;
		}
	}
	return (ret);
}
