#include <unistd.h>

void	ft_union(char *str1, char *str2)
{
	int	i = 0;
	int	arr[256] = {0};

	while (str1[i])
	{
		if (arr[(unsigned char)str1[i]] == 0)
		{
			write (1, &str1[i], 1);
			arr[(unsigned char)str1[i]] = 1;
		}
		i++;
	}
	 i = 0;
	while (str2[i])
	{
		if (arr[(unsigned char)str2[i]] == 0)
		{
			write (1, &str2[i], 1);
			arr[(unsigned char)str2[i]] = 1;
		}
		i++;
	}
}

int	main(int ac, char *av[])
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write (1, "\n", 1);
	return 0;
}