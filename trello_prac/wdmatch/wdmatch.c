#include <unistd.h>

int	ft_wdmatch(char *str1, char *str2)
{
	int	i = 0;
	int	j = 0;

	while (str2[j])
	{
		if (str1[i] == str2[j])
			i++;
		j++;
	}
	if (str1[i] == '\0')
		return 1;
	return 0;
}

int	main(int ac, char *av[])
{
	int i = 0;

	if (ac == 3)
	{
		if (ft_wdmatch(av[1], av[2]) == 1)
		{
			while (av[1][i])
			{
				write(1, &av[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return 0;
}