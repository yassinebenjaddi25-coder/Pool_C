#include <stdbool.h>
#include <stdio.h>

bool is_powerof3(int n)
{
    if (n <= 0)
        return (false);
    while (n % 3 == 0)
        n /= 3;
    return (n == 1);
}

int main(void)
{
    int n;
    printf("Entrez un nombre  : ");
    scanf("%d", &n);
    bool r= is_powerof3(n);
    if (r)
        printf("%d est une puissance de 3\n", n);
    else
        printf("%d n'est pas une puissance de 3\n", n);
    return (0);
}