#include <unistd.h>

void	ft_swap(char **a, char **b)
{
	char *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	ft_strlen(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return len;
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	c;

	if (argc <= 1)
		return 0;
	i = 1;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - i)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				ft_swap(&argv[j], &argv[j + 1]);
			}
			j++;
		}
		i++;
	}
	c = 1;
	while (c < argc)
	{
		write(1, argv[c], ft_strlen(argv[c]));
		write(1, "\n", 1);
		c++;
	}
	return 0;
}