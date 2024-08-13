#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	c;
	char	t[];
	int	i;

	c = 1;
	while (c < argc)
	{
		i = 0;
		if (argv[c] < argv[c+1])
		{
			while (arg[c][i])
			{
				argc[c][i] == t[i];
				i++;
			}
			write (1, "\n", 1);
		}
		c++;
	}
}