#include <stdio.h>
int reverse_array(int arr[]){
    int i;
    for (i=4; i>=0; i--) {
        printf("%d ", arr[i]);
    }
}
// script test
int main() {
    int arr[5] = {5, 4, 3, 2, 1};
     printf("Les éléments de tableau inversés: ");
    reverse_array(arr);
    printf("\n");
    return 0;
}