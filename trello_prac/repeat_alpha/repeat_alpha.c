#include <unistd.h>

int	main(int ac, char *av[])
{
	int	c;
	int	i;
	int	j;

	if (ac >= 2)
	{
		i = 0;
		while (av[1][i] != '\0')
		{
			j = 0;
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				c = av[1][i] - 'a' + 1;
				while (j < c)
				{
					write (1, &av[1][i], 1);
					j++;
				}
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				c = av[1][i] - 'A' + 1;
				while (j < c)
				{
					write (1, &av[1][i], 1);
					j++;
				}
			}
			i++;
		}
		write (1, "\n", 1);
	}
	else
		write (1, "\n", 1);
	return 0;
}