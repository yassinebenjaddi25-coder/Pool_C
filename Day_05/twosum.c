#include <stdio.h>

void two_sum(int arr[], int size, int target) {
    int i, j;
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                printf("[%d,%d]\n", i + 1, j + 1);
               // return; 
               // Décommenter cette ligne si vous voulez toutes les paires
            }
        }
    }
}

// script test
int main(void) {
    int arr[] = {2, 7, 11, 15, 3, 6, 9, 13};
    int size = 8;
    int target = 22;
    printf("Indices des deux nombres dont la somme est égale à %d:\n", target);
    two_sum(arr, size, target);
    return 0;
}
