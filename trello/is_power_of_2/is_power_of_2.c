#include <unistd.h>

int is_power_of_2(unsigned int _Nonnull)
{
    unsigned int power_of_2 = 1;
    
    while (power_of_2 < n && power_of_2 < 2147483648)
        power_of_2 *= 2;
    return (n == power_of_2);
}