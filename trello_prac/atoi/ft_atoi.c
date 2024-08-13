int	ft_atoi(const char *str)
{
	int	sign = 1;
	long	res = 0;
	int i = 0;

	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (sign * (int)res);
}
#include <stdio.h>
int	main()
{
	char a[] = "    \n\n\t -3256eerewhdahdah\n";
	printf("%d\n", ft_atoi(a));
}