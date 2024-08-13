#include <unistd.h>

int	main(int argc, char **argv)
{
	int     i;
	char	j;
	
	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				j = argv[1][i];
				while (j >= 'a')
				{
					write(1, &argv[1][i], 1);				
					j--;
				}
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				j = argv[1][i];
				while (j >= 'A')
				{
					write(1, &argv[1][i], 1);				
					j--;
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
						
