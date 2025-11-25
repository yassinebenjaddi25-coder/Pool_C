#include<stdio.h>
int sqrt_x(int nb) {
    int i;
    if (nb < 0)
        return (-1);
    if (nb == 0 || nb == 1)
        return (nb);
    i = 0;
    while (i * i <= nb)
        i++;
    return (i - 1);
}
int main(void){
    int nombre,résultat;
    printf("Entrez un nombre entier : ");
    scanf("%d",&nombre);
    résultat = sqrt_x(nombre);
    if (résultat == -1)
        printf("Erreur: Nombre négatif entré\n");
    else
        printf("La racine carrée entière de %d est %d\n", nombre, résultat);
    return (0);
}
