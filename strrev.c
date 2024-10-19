#include <unistd.h>

// str reverse


int main()
{
    char s[] = "reverse me";

    int i = 0;
    while (s[i])
        i++;
    i-=1;
    while (i>=0)
    {
        write (1, &s[i], 1);
        i--;
    }
}
