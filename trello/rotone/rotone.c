#include <unistd.h>

int		main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] == 'z')
				write(1, "a", 1);
			else if (argv[1][i] == 'Z')
				write(1, "A", 1);
			else if ((argv[1][i] >= 'a' && argv[1][i] <= 'y') || (argv[1][i] >= 'A' && argv[1][i] <= 'Y'))
			{
				j = argv[1][i];
				j += 1;
				write(1, &j, 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

#include <unistd.h>

void	ft_rotone(char **argv, int i)
{
	int	j;

	j = argv[1][i];
	j += 1;
	write(1, &j, 1);
}

int		main(int argc, char **argv)
{
	int	i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] == 'z')
				write(1, "a", 1);
			else if (argv[1][i] == 'Z')
				write(1, "A", 1);
			else if ((argv[1][i] >= 'a' && argv[1][i] <= 'y') 
					|| (argv[1][i] >= 'A' && argv[1][i] <= 'Y'))
				ft_rotone(argv, i);
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
