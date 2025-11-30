#include <stdio.h>
#include <math.h>   
#include <string.h> 

// --- VARIABLES GLOBALES POUR L'HISTORIQUE ---
char historique[5][100]; // Tableau pour stocker 5 phrases de 100 caractères
int compteur_historique = 0;

// --- FONCTION POUR AJOUTER À L'HISTORIQUE ---
void ajouter_historique(char *calcul) {
    int i;
    // Si l'historique est plein (5 éléments)
    if (compteur_historique == 5) {
        for (i = 0; i < 4; i++) {
            strcpy(historique[i], historique[i + 1]);
        }
        strcpy(historique[4], calcul); // On met le nouveau à la fin
    } else {
        strcpy(historique[compteur_historique], calcul);
        compteur_historique++;
    }
}

// --- FONCTION FACTORIELLE ---
long long factorielle(int n) {
    int i;
    if (n < 0)
     return -1; // Erreur
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
    char buffer[100]; // Pour créer la phrase à sauvegarder

    printf("=== sCalculatrice CLI ===\n");

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
        printf("9. Voir l'historique\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        // --- TRAITEMENT DU CHOIX ---
        switch (choix) {
            case 1: // Addition
                printf("Entrez deux nombres : ");
                scanf("%lf %lf", &num1, &num2);
                resultat = num1 + num2;
                printf("Resultat : %.2lf\n", resultat);
                sprintf(buffer, "%.2lf + %.2lf = %.2lf", num1, num2, resultat);
                ajouter_historique(buffer);
                break;

            case 2: // Soustraction
                printf("Entrez deux nombres : ");
                scanf("%lf %lf", &num1, &num2);
                resultat = num1 - num2;
                printf("Resultat : %.2lf\n", resultat);
                sprintf(buffer, "%.2lf - %.2lf = %.2lf", num1, num2, resultat);
                ajouter_historique(buffer);
                break;

            case 3: // Multiplication
                printf("Entrez deux nombres : ");
                scanf("%lf %lf", &num1, &num2);
                resultat = num1 * num2;
                printf("Resultat : %.2lf\n", resultat);
                sprintf(buffer, "%.2lf * %.2lf = %.2lf", num1, num2, resultat);
                ajouter_historique(buffer);
                break;

            case 4: // Division
                printf("Entrez deux nombres : ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 != 0) {
                    resultat = num1 / num2;
                    printf("Resultat : %.2lf\n", resultat);
                    sprintf(buffer, "%.2lf / %.2lf = %.2lf", num1, num2, resultat);
                    ajouter_historique(buffer);
                } else {
                    printf("Erreur : Division par zero impossible.\n");
                }
                break;

            case 5: // Factorielle
                printf("Entrez un nombre entier positif : ");
                int n;
                scanf("%d", &n);
                long long fact = factorielle(n);
                if (fact != -1) {
                    printf("Resultat : %lld\n", fact);
                    sprintf(buffer, "fact(%d) = %lld", n, fact);
                    ajouter_historique(buffer);
                } else {
                    printf("Erreur : Nombre negatif.\n");
                }
                break;

            case 6: // Racine Carrée
                printf("Entrez un nombre positif : ");
                scanf("%lf", &num1);
                if (num1 >= 0) {
                    resultat = sqrt(num1);
                    printf("Resultat : %.2lf\n", resultat);
                    sprintf(buffer, "sqrt(%.2lf) = %.2lf", num1, resultat);
                    ajouter_historique(buffer);
                } else {
                    printf("Erreur : Impossible de faire la racine d'un nombre negatif.\n");
                }
                break;

            case 7: // Puissance 2
                printf("Entrez un nombre : ");
                scanf("%lf", &num1);
                resultat = num1 * num1;
                printf("Resultat : %.2lf\n", resultat);
                sprintf(buffer, "pwr2(%.2lf) = %.2lf", num1, resultat);
                ajouter_historique(buffer);
                break;

            case 8: // Puissance 3
                printf("Entrez un nombre : ");
                scanf("%lf", &num1);
                resultat = num1 * num1 * num1;
                printf("Resultat : %.2lf\n", resultat);
                sprintf(buffer, "pwr3(%.2lf) = %.2lf", num1, resultat);
                ajouter_historique(buffer);
                break;

            case 9: // Afficher l'historique
            int i;
                printf("\n--- HISTORIQUE DES 5 DERNIERS CALCULS ---\n");
                if (compteur_historique == 0) {
                    printf("L'historique est vide.\n");
                } else {
                    for (i = 0; i < compteur_historique; i++) {
                        printf("%d. %s\n", i + 1, historique[i]);
                    }
                }
                break;

            case 0:
                printf("Fermeture du programme. Au revoir !\n");
                break;

            default:
                printf("Choix invalide. Veuillez reessayer.\n");
        }

    } while (choix != 0);

    return 0;
}