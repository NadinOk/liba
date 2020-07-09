#include "../inc/header.h" 

void mx_push_front(t_list **list, void *data){
  t_list *nod = mx_create_node(data);
  nod->next = (*list);
  (*list) = nod;
}
