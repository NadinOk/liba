#include "../inc/header.h"

int mx_list_size(t_list *list) {
  int i = 1;
  
      if (list == NULL) {
        return 0;  
      }

      t_list *j = list;
      if (!j) { 
          return i;
      }
      while (j && j->next != NULL) {
          i++;
          j = j->next;
        }
      return i;
}
