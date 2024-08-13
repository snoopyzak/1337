#include <stdlib.h>

int    ft_strchr(char c, char *charset)
{
    int i = 0;

    while (charset[i])
    {
        if (c == charset[i])
            return 1;
        i++;
    }
    return 0;
}

int    ft_countwords(char *str, char *charset)
{
    int i = 0;
    int count = 0;

    while (str[i])
    {
        while (str[i] && ft_strchr(str[i], charset))
            i++;
        if (str[i])
            count++;
        while (str[i] && !ft_strchr(str[i], charset))
            i++;
    }
    return (count);
}

char    *ft_substr(char *str, int start, int finish)
{
    char	*word;
    int		i;

    i = 0;
    word = malloc((finish - start + 1) * sizeof(char));
    if (word == NULL)
        return (NULL);
    while (start < finish)
        word[i++] = str[start++];
    word[i] = '\0';
    return (word);
}

char    **ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		k;
	char	**split;

	split = (char **)malloc(sizeof(char *) * (ft_countwords(str, charset) + 1));
	if (split == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (str[i])
	{
		while (str[i] && ft_strchr(str[i], charset))
            i++;
		if (str[i] == '\0')
			break;
        j = 0;
        while (str[i + j] && !ft_strchr(str[i+ j], charset))
            j++;
        split[k++] = ft_substr(str, i, i + j);
        i += j;
    }
	split[k] = NULL;
    return (split);
}


#include <stdio.h>
int    main()
{
    char s[] = "";
    printf("wordcount: %d\n", ft_countwords(s, " \n\t"));
    // printf("substr %s\n", ft_substr(s, 9, 15));
	int i = 0;
	char **split = ft_split(s, " \n\t");
	while (split[i] != NULL)
		printf("split words: %s\n", split[i++]);
	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
	return 0;
}