#include <unistd.h>

void putnbr(int num)
{
    char c;

    if (num < 0)
    {
        write(1, "-", 1);
        num = -num;
    }
    if (num > 9)
    {
        putnbr(num / 10);
        putnbr(num % 10);
    }
    else
    {
        c = num + '0';
        write(1, &c, 1);
    }
}

void printNumbers(int start, int end)
{
    if (start > end)
        return;
    putnbr(start);
    if (start < end)
    {
        write(1, ", ", 2);
    }
    printNumbers(start + 1, end);
}

int main()
{
    printNumbers(-10, 20);
    return 0;
}