#include <stdio.h>

int count_words(char *str)
{
    int i = 0;
    int in_word = 0;
    int count = 0;

    while (str[i])
    {
        if (str[i] != ' ' && !in_word)
        {
            in_word = 1;
            count++;
        }
        else if (str[i] == ' ' && in_word)
        {
            in_word = 0;
        }
        i++;
    }
    return count;
}

int main()
{
    char s[] = " hi this is a word counter xd";
    printf("%d\n", count_words(s));
    return 0;
}