#include "../inc/libmx.h"

int mx_quicksort(char **arr, int left, int right) {
  
    if (!arr) {
        return -1;
    }

  char *b = NULL;
  int l = left;
  int r = right;
  int res = (l + r) / 2;
  unsigned int count = 0;
  
  while (l <= r) {
        while (mx_strlen(arr[l]) < mx_strlen(arr[res])) {
            l++;
        }
        while (mx_strlen(arr[r]) > mx_strlen(arr[res])) {
            r--;
        }

        if (l <= r && mx_strlen(arr[l]) != mx_strlen(arr[r])) {
           b = arr[l];
            arr[l] = arr[r];
            arr[r] = b;
            count++;
        }
        l++;
        r--;
        if (left < r)
        {
            count += mx_quicksort(arr, left, r);
        }
        if (l < right)
        {
            count += mx_quicksort(arr, l, right);
        }
    }
    return count;
}
