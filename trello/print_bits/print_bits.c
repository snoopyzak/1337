#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int integer;
	int dividend;

	dividend = 128;
	integer = octet;
	while (dividend != 0)
	{
		if (dividend <= integer)
		{
			write(1, "1", 1);
		integer = integer % dividend;
		}
		else
			write(1, "0", 1);
		dividend = dividend / 2;
	}
}
