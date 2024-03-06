#include "main.h"
#include <stdio.h>

/**
 * *_strstr - localise 1er occurrence de la sous-chaîn
 * @haystack: ici qu'on va rechercher la sous-chaîn
 * @needle: il s'agit de la sous-chaîne
 * Return: Si trouvée, renvoie un pointeur vers le début dea
 * sous-chaîne ; sinon, indique que la sous-chaîne n~@~Ya pas été tro.
 */
char *_strstr(char *haystack, char *needle) {
    // Vérification des entrées
    if (haystack == NULL || needle == NULL) {
        return NULL;
    }

    // Parcourir la chaîne haystack
    while (*haystack != '\0') {
        char *h = haystack;  // Pointeur vers le début de l'occurrence potentielle
        char *n = needle;    // Pointeur vers le début de la sous-chaîne

        // Parcourir la sous-chaîne needle
        while (*h != '\0' && *n != '\0' && *h == *n) {
            h++;
            n++;
        }

        // Vérifier si la sous-chaîne a été entièrement parcourue
        if (*n == '\0') {
            return haystack;  // Retourner un pointeur vers le début de l'occurrence
        }

        // Passer au caractère suivant dans haystack
        haystack++;
    }

    return NULL;  // Si aucune occurrence n'a été trouvée
}
