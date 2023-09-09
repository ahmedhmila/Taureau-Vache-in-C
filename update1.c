#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 12
#define MIN_NUMBER 100
#define MAX_NUMBER 2147483647


//rest of the code
long int saisie() {
    long int n;
    do {
        printf("Donner un nombre entre 100 et 2,147,483,647 OU tous les chiffres sont differents\n\n");
        scanf("%ld", &n);
    } while ((n < MIN_NUMBER) || (n > MAX_NUMBER));
    return n;
}

int toul(long int a) {
    char ch[MAX_LENGTH];
    sprintf(ch, "%ld", a);
    return strlen(ch);
}

int diffB(int a) {
    int d;
    do {
        printf("Quelle diffuculte voulez vous choisir?\n\n1- * Facile macile\n2- *** Naadi rohi\n3- ***** Wasa3 wasa3 sahbi\n");
        scanf("%d", &d);
        if (d >= 1 && d <= 3) {
            int diffs[] = {0, a + 12, a + 7, a + 5};
            return diffs[d];
        }
    } while (1);
}

int diffS(int a) {
    int d;
    do {
        printf("Quelle diffuculte voulez vous choisir?\n\n1- * Facile macile\n2- *** Naadi rohi\n3- ***** Wasa3 wasa3 sahbi\n");
        scanf("%d", &d);
        if (d >= 1 && d <= 3) {
            int diffs[] = {0, a + 6, a + 5, a + 4};
            return diffs[d];
        }
    } while (1);
}

// ... (similar modifications for other functions)

int main() {
    // ... (rest of your code)
    char *p = malloc(MAX_LENGTH * sizeof(char));
    if (p == NULL) {
        printf("pas assez de memoire\n");
        exit(EXIT_FAILURE);
    }

    // ... (rest of the code)
    
    free(p);
    return 0;
}
