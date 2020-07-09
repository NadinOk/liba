#include "../inc/header.h"

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *)) {
      if (lst == NULL || cmp == NULL)
          return NULL;

      for (t_list *i = lst; i->next != NULL; i = i->next) 
  {
          t_list *m = i;     
        for (t_list *j = i->next; j != NULL; j = j->next) 
    {
          if (cmp(m->data, j->data))
                  m = j;
          void *tmp = m->data;
          m->data = i->data;
          i->data = tmp;        
        }
  }
      return lst;
}
