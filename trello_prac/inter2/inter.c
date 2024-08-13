#include <unistd.h>

int	main(int ac, char *av[])
{
	if (ac == 3)
	{
		int i = 0, j;
		int arr[256] = {0};

		while (av[1][i] != '\0')
		{
			j = 0;
			while (av[2][j] != '\0')
			{
				if (av[1][i] == av[2][j] && arr[(unsigned char)av[1][i]] == 0)
				{
					write(1, &av[1][i], 1);
					arr[(unsigned char)av[1][i]] = 1;
					break;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}