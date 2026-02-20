#include <libft.h>

t_list *ft_lastlast(t_list *lst)
{
    if(!lst)
        return (0);
    while(lst->next!=NULL)
        lst = lst->next;
    return (lst);
}