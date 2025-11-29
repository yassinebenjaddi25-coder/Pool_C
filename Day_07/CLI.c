#include <stdio.h>
#include <math.h>

// --- FONCTION FACTORIELLE ---
long long factorielle(int n) {
    int i;
    if (n < 0)
     return -1; 
    if (n == 0)
     return 1;
    long long res = 1;
    for (i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

int main() {
    int choix;
    double num1, num2, resultat;
    int n; // Pour la factorielle

    printf("=== CALCULATRICE CLI ===\n");

    do {
        // --- MENU ---
        printf("\n--- MENU ---\n");
        printf("1. Addition (+)\n");
        printf("2. Soustraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Factorielle (!)\n");
        printf("6. Racine Carree (sqrt)\n");
        printf("7. Puissance 2 (x^2)\n");
        printf("8. Puissance 3 (x^3)\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        // --- TRAITEMENT DU CHOIX ---
        switch (choix) {
            case 1: // Addition
                printf("Entrez deux nombres : ");
                scanf("%lf %lf", &num1, &num2);
                printf("Resultat : %.2lf\n", num1 + num2);
                break;

            case 2: // Soustraction
                printf("Entrez deux nombres : ");
                scanf("%lf %lf", &num1, &num2);
                printf("Resultat : %.2lf\n", num1 - num2);
                break;

            case 3: // Multiplication
                printf("Entrez deux nombres : ");
                scanf("%lf %lf", &num1, &num2);
                printf("Resultat : %.2lf\n", num1 * num2);
                break;

            case 4: // Division
                printf("Entrez deux nombres : ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 != 0) {
                    printf("Resultat : %.2lf\n", num1 / num2);
                } else {
                    printf("Erreur : Division par zero impossible.\n");
                }
                break;

            case 5: // Factorielle
                printf("Entrez un nombre entier positif : ");
                scanf("%d", &n);
                long long fact = factorielle(n);
                if (fact != -1) {
                    printf("Resultat : %lld\n", fact);
                } else {
                    printf("Erreur : Nombre negatif.\n");
                }
                break;

            case 6: // Racine Carrée
                printf("Entrez un nombre positif : ");
                scanf("%lf", &num1);
                if (num1 >= 0) {
                    printf("Resultat : %.2lf\n", sqrt(num1));
                } else {
                    printf("Erreur : Nombre negatif interdit pour la racine.\n");
                }
                break;

            case 7: // Puissance 2
                printf("Entrez un nombre : ");
                scanf("%lf", &num1);
                printf("Resultat : %.2lf\n", num1 * num1);
                break;

            case 8: // Puissance 3
                printf("Entrez un nombre : ");
                scanf("%lf", &num1);
                printf("Resultat : %.2lf\n", num1 * num1 * num1);
                break;

            case 0:
                printf("Au revoir !\n");
                break;

            default:
                printf("Choix invalide.\n");
        }

    } while (choix != 0);

    return 0;
}