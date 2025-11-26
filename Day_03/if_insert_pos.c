#include <stdio.h>

int if_insert_pos(int arr[], int size, int n) {
    int i;
    for ( i = 0; i < size; ++i) {
        if (arr[i] >= n)
            return i;
    }
    return size;
}
int main() {
    int arr[] = {1, 3, 5, 7};
    int size =sizeof(arr)/sizeof(arr[0]);
    int n = 6;
    int p;
    p = if_insert_pos(arr, size, n);
    printf("Position à insérer %d is: %d\n", n, p);
    return 0;
}