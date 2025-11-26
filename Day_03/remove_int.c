#include <stdio.h>

void remove_int(int arr[], int size, int target) {
    int k= 0;
    int read_pos;
    for (read_pos = 0; read_pos < size; read_pos++) {
        if (arr[read_pos] != target) {
            arr[k] = arr[read_pos];
            k++;
        }
    }
    
    for (int i = k; i < size; i++) {
        arr[i] = 0;
    }
}

void print_array(int arr[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int size = 7;
    int target = 2;
    
    printf("Tableau original: ");
    print_array(arr, size);
    
    printf("Suppression de %d\n", target);
    remove_int(arr, size, target);
    
    printf("Tableau modifié: ");
    print_array(arr, size);
    
    return 0;
}