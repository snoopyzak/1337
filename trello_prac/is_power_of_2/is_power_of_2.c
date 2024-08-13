/*
int is_power_of_2(unsigned int n)
{
	if (n == 0)
		return 0;   
	// Check if n is a power of 2 using bitwise AND
	// A number n is a power of 2 if and only if n & (n - 1) is 0
	if ((n & (n - 1)) == 0)
		return 1;
	else
		return 0;
}
*/
#include <stdbool.h>
#include <stdio.h>

bool isPowerOfTwo(int n)
{
    if (n == 0)
        return 0;
    while (n != 1)
	{
        if (n % 2 != 0)
            return 0;
        n = n / 2;
    }
    return 1;
}

int main()
{
    isPowerOfTwo(31) ? printf("Yes\n") : printf("No\n");
    isPowerOfTwo(64) ? printf("Yes\n") : printf("No\n");
    return 0;
}