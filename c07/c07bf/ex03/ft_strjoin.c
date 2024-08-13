#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return i;
}

char	*ft_strcpy(char *dest, char *src)
{
	int i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return dest;
}

int	ft_calc_size(int size, char **strs, char *sep)
{
	int	size_ = 0;
	int	i = 0;

	size_ += ft_strlen(sep) * (size - 1);
	while (i < size)
		size_ += ft_strlen(strs[i++]);
	return size_;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*str;

	if (size == 0)
	{
		str = (char *)malloc(1);
		if (str)
			str[0] = 0;
		return str;
	}
	str = (char *)malloc(sizeof(char) * ft_calc_size(size, strs, sep) + 1);
	if (!str)
		return NULL;
	j = 0;
	i = 0;
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
#include <stdio.h>
int	main()
{
	char *s[] = {"hello", "how", "u doing", "? xd"};
	char *sep = " :D ";
	int size = sizeof(s) / sizeof(s[0]);
	char *str = ft_strjoin(size, s, sep);
	if (str == NULL)
	{
		printf("malloc failed || invalid string");
		return 1;
	}
	printf("%s\n", str);
	free(str);
	return 0;
}