#include<stdio.h>
int factorial(int nb) {
    if (nb < 0)
        return (-1);
    if (nb == 0 || nb == 1)
        return (1);
    return (nb * factorial(nb - 1));
}
int main(void){
    int nombre,résultat;
    printf("Entrez un nombre entier : ");
    scanf("%d",&nombre);
    résultat = factorial(nombre);
    if (résultat == -1)
        printf("Erreur: Nombre négatif entré\n");
    else
        printf("Le facteur de %d est %d\n", nombre, résultat);
    return (0);
}