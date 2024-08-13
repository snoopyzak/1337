#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(int ac, char *av[])
{
    if (ac == 4)
    {
        int result;
        int num1 = atoi(av[1]);
        int num2 = atoi(av[3]);

        if (av[2][0] == '+')
            result = num1 + num2;
        else if (av[2][0] == '-')
            result = num1 - num2;
        else if (av[2][0] == '*')
            result = num1 * num2;
        else if (av[2][0] == '/')
        {
            if (num2 == 0)
            {
                write(1, "Error: Division by zero\n", 24);
                return 1;
            }
            result = num1 / num2;
        }
        else if (av[2][0] == '%')
        {
            if (num2 == 0)
            {
                write(1, "Error: Division by zero\n", 24);
                return 1;
            }
            result = num1 % num2;
        }
        else
        {
            write(1, "Error: Invalid operator\n", 24);
            return 1;
        }
        char buffer[12];
		int len = snprintf(buffer, sizeof(buffer), "%d\n", result);
		write(1, buffer, len);

		return 0;
    }
    else
    {
        write(1, "\n", 1);
        return 0;
    }
}