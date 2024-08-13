int	ft_iterative_power(int nb, int power)
{
	int	res = 1;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power > 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}