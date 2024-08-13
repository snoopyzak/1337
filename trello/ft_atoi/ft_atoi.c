int	ft_atoi(const char *str)
{
	int	i = 0;
	int	neg_flag = 0;
	int	result = 0;

	while (str[i])
	{
		result *= 10; // moves the result into the right place holder
		if (str[i] == '-' && !(neg_flag)) // checks wheather the the result should be negative, only once
			neg_flag = 1;
		if (str[i] >= '0' && str[i] <= '9') // if the char is between these values
            result += str[i] - '0'; // transform the char value into the correct int value
		i++;
	}
	if (neg_flag)
		return (result * -1);
	return (result);
}
