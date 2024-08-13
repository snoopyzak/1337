#include <stdlib.h>
#include <stdio.h>

char range(int **range, int min, int max)
{
    int size = max - min;
    *range = (int *)malloc(size * sizeof(int));
    if (*range == NULL)
		return -1;
    for (int i = 0; i < size; i++) (*range)[i] = min + i;
    return 0;
}

int main()
{
    int *array;
    if (range(&array, -4, 5) != 0) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (int i = 0; i < 9; i++) printf("%d ", array[i]);
    printf("\n");
    free(array);
    return 0;
}
