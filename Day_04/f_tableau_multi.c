#include <stdio.h>

void f_tableau_multi(int n) {
    int i;
    for (i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

// script de test
int main() {
    printf("Table de multiplication de 7:\n");
    f_tableau_multi(7);
    return 0;
}
