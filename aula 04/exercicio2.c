#include <stdio.h>
#include <string.h>

int EhVogal(char A) {
    switch (A) {
        case 'a': 
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': return 1;
        default: return 0;
    }
}

int NumVogais(const char* string) {
    int count = 0;
    for (int i = 0; *(string+i) != '\0'; i++) if (EhVogal(*(string+i))) count++;
    return count;
}

int main() {
    const char* string;
    scanf("%s", string);
    printf("%d\n", NumVogais(string));
    return 0;
}