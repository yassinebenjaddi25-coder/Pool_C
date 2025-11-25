#include <stdio.h>

void calc(void) {
    char operation;
    float num1, num2, result;

    printf("Enter première nombre: ");
    scanf("%f", &num1);

    printf("Enter l'opération (+, -, *, /): ");
    scanf(" %c", &operation);

    printf("Enter deuxième nombre: ");
    scanf("%f", &num2);

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Erreur: Division par zéro\n");
                return;
            }
            break;
        default:
            printf("Erreur: Opération non valide\n");
            return;
    }

    printf("Résultat: %.2f\n", result);
}

int main(void) {
    calc();
    return 0;
}