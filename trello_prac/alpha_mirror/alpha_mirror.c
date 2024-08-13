#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i;
	// int	alphalen = 26;
	// int	x;
	char	taba[26] = "zyxwvutsrqponmlkjihgfedcba";
	char	tabA[26] = "ZYXWVUTSRQPONMLKJIHGFEDCBA";

	i = 0;
	if (ac != 2)
		write (1, "\n", 1);
	else
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z') 
			{
				av[1][i] = taba[(av[1][i] - 'a')];
				write (1, &av[1][i], 1);
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				// x = alphalen - (av[1][i] - 'A' - 1);
				// av[1][i] = ('Z' - x) + 'A';
				av[1][i] = tabA[(av[1][i] - 'A')];
				write (1, &av[1][i], 1);
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
		write (1, "\n", 1);
	}
	return 0;
}