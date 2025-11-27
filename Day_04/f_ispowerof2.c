#include <stdio.h>
int f_ispowerof2(int x)
{
    if (x <= 0)
        return (0);
    return ((x & (x - 1)) == 0);
}
// script de test
int main()
{
    int x;
    printf("Entrez un nombre entier : ");
    scanf("%d", &x);
    if (f_ispowerof2(x))
        printf("%d est une puissance de 2.\n", x);
    else
        printf("%d n'est pas une puissance de 2.\n", x);
    return 0;
}