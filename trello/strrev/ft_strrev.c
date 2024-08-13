#include <stdlib.h>
#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	i;
	int	j;
	int	len;
	char	*temp;

	len = 0;
	while (str[len])
		len++;
	temp = (char *)malloc(sizeof(char) * len);
	i = 0;
	while (str[i])
	{
		temp[i] = str[i];
		i++;
	}
	i--;
	j = 0;
	while (temp[i])
	{
		str[j] = temp[i];
		i--;
		j++;
	}
	str[j] = '\0';
	return (str);
}
