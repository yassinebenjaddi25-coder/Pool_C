#include <stdio.h>
long long fib_tail(int n, long long a, long long b)
{
    if (n == 0)
        return (a);
    if (n == 1)
        return (b);
    return (fib_tail(n - 1, b, a + b));
}
// script test 
int main(void)
{
    int n ;
    printf("Entrez un nombre: ");
    scanf("%d", &n);
    long long r = fib_tail(n, 0, 1);
    printf("Fibonacci de %d est %lld\n", n,r);
    return 0;
}