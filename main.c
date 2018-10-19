// Fermín Narváez Reyes A01411229
#include <stdio.h>
#include <string.h>

int main() {
    char string[200]; // El tamaño del string
    int length; // Declaración de las variables

    printf("Escribe aquí: "); // Lo que le va a aparecer
    fgets(string, sizeof(string), stdin);

    length = strlen(string);

    for (int i = length - 1; i >= 0; i--){ // PROCESO para reversearlo
        printf("%c", string[i]); // Lo que aparece
    }

    return 0; // Fin
}
