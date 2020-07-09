void mx_foreach(int *arr, int size, void (*f)(int)) {

int i = 0;
for (; arr[i] < size; i++) {
 f(arr[i]);
    }
}
