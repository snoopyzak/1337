int	max(int *tab, unsigned int len)
{
	unsigned int i;
	int max;
	
	i = 0;
	max = 0;
	if (len > 0)
		max = tab[0];
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}