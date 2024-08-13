#include <stdio.h>

int max(int* tab, unsigned int len)
{
    int i;
    int max;

    if (len == 0)
        return 0;
    max = tab[0];
	i = 1;
    while (i < len)
    {
        if (tab[i] > max)
            max = tab[i];
		i++;
    }
    return (max);
}

int	main()
{
	int	arr[] = {1, 5, 23, 6, 0, 42, 37, -2, -43, 0};
	int size = 10;
	printf("%d", max(arr, size));
	return 0;
}