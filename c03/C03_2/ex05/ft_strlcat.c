/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaakrab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:13:59 by zaakrab           #+#    #+#             */
/*   Updated: 2024/08/08 15:14:01 by zaakrab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	src_len;
	unsigned int	dest_len;

	i = 0;
	while (dest[i] != 0)
		i++;
	dest_len = i;
	j = 0;
	while (src[j] != 0)
		j++;
	src_len = j;
	if (size == 0 || size <= dest_len)
		return (src_len + size);
	j = 0;
	while (src[j] != 0 && (j < size - dest_len - 1))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = 0;
	return (src_len + dest_len);
}
