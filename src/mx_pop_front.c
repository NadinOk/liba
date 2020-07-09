#include "../inc/header.h"

void mx_pop_front(t_list **list) {  
  if (*list == NULL || list == NULL)
    return;  
  
  if ((*list)->next == NULL) 
  {
    free(*list);
    *list = NULL;
    return;
  }
  else 
  {
    t_list *p = (*list)->next;
    if (!p) return;
    free(*list);
    *list = p;
  }
}
