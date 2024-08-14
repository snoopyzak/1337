#include "ft.h"

int	do_op(int i, int j, char e)
{
	if (e == '+')
		return i + j;
	if (e == '-')
		return i - j;
	if (e == '*')
		return i * j;
	if (e == '/')
		return (j != 0) ? i / j : 0;
	if (e == '%')
		return (j != 0) ? i % j : 0;
	else
		return 0;
}

int	main(int ac, char **av)
{
	int i = 0;
	if (ac == 4)
	{
		if (av[2][1] != 0)
		{
			ft_putchar('\n');
			return 0;
		}
		ft_putnbr(do_op(ft_atoi(av[1]), ft_atoi(av[3]), av[2][0]));
	}
	ft_putchar('\n');
	return 0;
}