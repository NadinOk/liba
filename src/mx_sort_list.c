#include "../inc/libmx.h"

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *)) {
      t_list *sort = lst;
    unsigned int size = mx_list_size(lst);

    for (unsigned int i = 0; i < size - 1; i++)
    {
        for (unsigned int j = 0; j < size - 1 - i; j++)
        {
            if (cmp(sort -> data, sort -> next -> data))
            {
                t_list *temp = sort;
                sort = sort -> next;
                sort -> next = temp;
            }
            sort = sort -> next;
        }
    }
      return lst;
}
