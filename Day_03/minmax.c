#include <stdio.h>

int min_max(int arr[], int size, int *min, int *max) {
    // Vérification des paramètres
    if (arr == NULL || size <= 0 || min == NULL || max == NULL) {
        return -1;
    }
    
    *min = arr[0];
    *max = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
    
    return 0;
}


int main() {
    int tableau[] = {5, 2, 9, 1, 7, 6, 3};
    int taille = sizeof(tableau) / sizeof(tableau[0]);
    int min, max;
    
    printf("Tableau : ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
    
    if (min_max(tableau, taille, &min, &max) == 0) {
        printf("Minimum : %d\n", min);
        printf("Maximum : %d\n", max);
    } else {
        printf("Erreur lors du calcul\n");
    }
    
    return 0;
}