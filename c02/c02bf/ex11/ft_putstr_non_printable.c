#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int i;
	const char *base;
	char hex[3];

    i = 0;
    base = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			write(1, "\\", 1);
			hex[0] = base[(unsigned char)str[i] / 16];
			hex[1] = base[(unsigned char)str[i] % 16];
			hex[2] = '\0';
			write(1, hex, 2);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}