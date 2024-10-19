#include "list.h"
#include <stdlib.h>
#include <stdio.h>

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
    t_list *start = lst;
    int     tmp;

    if (!lst)
        return (NULL);
    while (lst)
    {
        t_list *next = lst->next;
        while (next)
        {
            if (!cmp(lst->data, next->data))
            {
                tmp = lst->data;
                lst->data = next->data;
                next->data = tmp;
            }
            next = next->next;
        }
        lst = lst->next;
    }
    return (start);
}

int ascending(int a, int b)
{
    return (a <= b);
}

int main(void)
{
    t_list *lst = malloc(sizeof(t_list));
    t_list *second = malloc(sizeof(t_list));
    t_list *third = malloc(sizeof(t_list));
    t_list *fourth = malloc(sizeof(t_list));

    lst->data = 5;
    lst->next = second;

    second->data = 2;
    second->next = third;

    third->data = -5;
    third->next = fourth;

    fourth->data = 9;
    fourth->next = NULL;

    lst = sort_list(lst, &ascending);

    t_list *current = lst;
    while (current != NULL)
    {
        printf("%d\n", current->data);
        current = current->next;
    }

    free(lst);
    free(second);
    free(third);
    free(fourth);

    return 0;
}