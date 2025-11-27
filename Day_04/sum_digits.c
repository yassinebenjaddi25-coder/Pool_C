#include <stdio.h>
int sum_digits(int n)
{
    int somme = 0;
    int i;
    // Gérer le cas où n est négatif en le traitant comme 0.
    if (n < 0) {
        n = 0;
    }
    for (i = 0; i <= n; i++)
    {
        somme += i;
    }
    return somme;
}
// script de test
int main()
{
    int n;
    printf("Entrez un nombre : ");
    scanf("%d", &n);
    int result = sum_digits(n);
    printf("Somme jusqu'à %d: %d\n",n,result);
    return 0;
}
