/* Resolução apresentada em sala */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGHT 51

int ocorrencia(char str1[], char str2[]);

int main(void) {
	char s1[MAX_LENGHT];
	char s2[MAX_LENGHT];

/*Nas duas últimas posições da string: '\n' e '\0'. */
	fgets(s1, MAX_LENGHT-1, stdin);

/*Substitui a última posição por '\0'. */
	s1[strlen(s1)] = '\0';

/*Expressão regular %[^\n], armazena todos com a exceção de '\n'. */
	scanf("%[^\n]", s2); 

	printf("%d", ocorrencia(s1, s2));

	return 0;
}

int ocorrencia(char str1[], char str2[]) {
	int tam1 = strlen(str1);
	int tam2 = strlen(str2);

	int j = 0;
	for(int i = 0, j = 0; i < tam1; i++) { //++i também funciona.
		if(str1[i] == tolower(str2[j])) j++;
		j = 0;
		if(j == tam2) return 1;
	}
	return 0;
}
