#include <unistd.h>

int	ft_has_char(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	ft_inter(char *str1, char *str2, char *comp)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str1[i])
	{
		if (ft_has_char(str2, str1[i]) == 1)
		{
			if (ft_has_char(comp, str1[i]) == 0)
			{
				write(1, &str1[i], 1);
				comp[j] = str1[i];
				j++;
			}
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	str[1024];

	if (argc == 3)
	{
		ft_inter(argv[1], argv[2], str);
	}
	write(1, "\n", 1);
	return (0);
}
