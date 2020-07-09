#include "../inc/header.h"

void mx_pop_back(t_list **list) {  
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
    t_list *p = *list;
    if (!p) return;
    while (p && p->next->next != NULL)
      p = p->next;
    free(p->next);
    p->next = NULL;
  }
} 
