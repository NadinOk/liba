#include "../inc/libmx.h"

void mx_pop_front(t_list **list) {  
   t_list *front = *head;
    t_list *second = front->next;
    free(front);
    *head = second;
}

