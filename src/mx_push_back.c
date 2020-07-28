#include "../inc/libmx.h"

void mx_push_back(t_list **list, void *data) {
  	t_list *point = *list;
  
  		if (point == NULL) {
    		*list = mx_create_node(data);
        return;
  		} 
    		while(point->next != NULL) {
      			point = point->next;
    		}
    	point->next = mx_create_node(data);
}
