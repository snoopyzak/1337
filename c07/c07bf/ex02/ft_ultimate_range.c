#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = ((max) - (min));
	*range = (int *)malloc(size * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}
#include <stdio.h>
int	main()
{
	int **array;
	ft_ultimate_range(array, -4, 3);
	if (*array == NULL)
	{
		printf("malloc failed || invalid range");
		return 1;
	}
	int i = 0;
	while (i<7)
	{
		printf("%d\n", (*array)[i]);
		i++;
	}
	free(*array);
	return 0;
}