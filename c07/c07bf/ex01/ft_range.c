#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*range;

	if (min >= max)
		return NULL;
	size = ((max) - (min));
	range = (int *)malloc(sizeof(int) * size);
	if (range == NULL)
		return NULL;
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return range;
}
#include <stdio.h>
int	main()
{
	int *array = ft_range(-4, 3);
	if (array == NULL)
	{
		printf("malloc failed || invalid range");
		return 1;
	}
	int i = 0;
	while (i<7)
	{
		printf("%d\n", array[i]);
		i++;
	}
	free(array);
	return 0;
}