#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max_index(int* v, int n) {
    int greater = v[0];
    int pos_greater = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] > greater) {
            greater = v[i];
            pos_greater = i;
        }
    }
    return pos_greater;
}

int main() {

    char buffer[256];
    int v[sizeof(buffer)];
    int i = 0;

    int n;
    int numbers[n];
    int count = 0; 
    int num;

    while (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        if (i == 0) n = atoi(buffer);
        else {
            char *ptr = buffer;
            while (count < n && sscanf(ptr, "%d", &num) == 1) {
                numbers[count] = num;
                count++;
                
                // Move o ponteiro para o próximo número
                ptr = strchr(ptr, ' ');
                if (ptr == NULL) break;
                ptr++; // Pula o espaço
            }
        }
        i++;
    }

    printf("Números lidos: ");
    for (int i = 0; i < count; i++) printf("%d ", numbers[i]);
    printf("\n");

    for(int i = 0; i < n; i++) printf("%d", numbers[i]);

    // scanf("%d", &n);
    // int v[n];
    // max_index(v, n);
}

// char* number;
// int k = 0;

// sscanf(buffer, "%d", &numbers[0], &numbers[1], &numbers[2]);

// for (int j = 0; j < strlen(buffer); j++) {
// if (buffer[j] == 32) {
//     printf("%d\n", atoi(number));
//     strcpy(number, ""); //5 -2 10
//     k = 0;
// }
// else {
//     printf("%c\n", buffer[j]);
//     number[k] = buffer[j];
//     k++;
// }
// }