#include<stdio.h>
#include <stdbool.h>
#include <string.h>
bool is_pal_tail(char *s){
    int len = strlen(s);
    if (len <= 1){
        return true;
}
    if (s[0] != s[len - 1]){
        return false;
    }
    s[len - 1] = '\0';
    return is_pal_tail(s + 1);
}
// script test
int main(void){
    char s[100];
    printf("Entrez une chaine de caractere: ");
    scanf("%s", s);
    bool r = is_pal_tail(s);
    if (r)
        printf("%s est un palindrome\n", s);
    else
        printf("%s n'est pas un palindrome\n", s);
    return 0;
}
/*  examples de test:
level, Palindrome
kayak, Palindrome
hello, Pas un palindrome
racecar, Palindrome
a, Palindrome (un seul caractère)
madamimadam, Palindrome
test, Pas un palindrome
*/