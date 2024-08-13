#include <unistd.h>

int	main(int ac, char *av[])
{
	int i = 0;
	int j;
	char arr[100] = "";
	int k;
	int flag;

	if (ac != 3)
	{
		write(1, "\n", 1);
		return 0;
	}

	while (av[1][i] != 0)
	{
		j = 0;
		while (av[2][j] != 0)
		{
			if (av[1][i] == av[2][j])
			{
				flag = 0;
				k = 0;
				while (arr[k] != 0)
				{
					if (av[2][j] == arr[k])
					{
						flag = 1;
						break;
					}
					k++;
				}
				if (flag == 0)
				{
					write(1, &av[2][j], 1);
					arr[k] = av[2][j];
					arr[k + 1] = 0;
				}
				break;
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
	return 0;
}