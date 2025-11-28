#include <stdio.h>
int sum_array(int arr[]) {
    int  n=10, i, sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
// script test
int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int r = sum_array(arr);
    printf("Somme des éléments du tableau %d\n", r);
    return 0;
}
