#include <unistd.h>

void	ft_last_word(char **argv, int i)
{
	while (argv[1][i] == ' ' || argv[1][i] == '\t')
		i--;
	while (i >= 0 && argv[1][i] != ' ' && argv[1][i] != '\t')
		i--;
	i++;
	while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
	{
		write(1, &argv[1][i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
			
	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
			i++;
		argv[1][i] = '\0';
		i--;
		ft_last_word(argv, i);
	}
	write(1, "\n", 1);
	return (0);
}
