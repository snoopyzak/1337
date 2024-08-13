/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strpbrk.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 15:09:55 by mmbatha           #+#    #+#             */
/*   Updated: 2018/07/01 15:30:48 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (0);
}

char	*ft_strpbrk(char const *str1, char const *str2)
{
	char *s1 = (char *)str1;
	char *s2 = (char *)str2;

	while (*s1)
	{
		if (ft_strchr(s2, *s1) != 0)
			return (s1);
		s1++;
	}
	return (NULL);
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		char *pch;

		pch = ft_strpbrk(argv[1], argv[2]);
		printf("Characters in |%s|: ", argv[1]);
		while (pch != NULL)
		{
			printf("%c ", *pch);
			pch = ft_strpbrk(pch + 1, argv[2]);
		}
		printf("\n");
	}
	return (0);
}
