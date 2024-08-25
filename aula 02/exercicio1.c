#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Biblioteca para implementar abaixar;
/*
int tolower(char a, char b) {
	if (a-b == 32) return a;
	if (b-a == 32) return b;
	if (a-b == 0) return a;
	return 0;
}
*/

//Somente por recursão:
/*
int ocorrencia(char* str1, char* str2) { //Na função são declarados dois parâmetros, sendo os ponteiros para str1 e str2.
	if (*str2 == '\0') return 1; //Caso base: segunda string vazia
	if (*str1 == '\0') return 0; //Caso base: primeira string vazia
	if (tolower((char)*str1) == tolower((char)*str2)) return ocorrencia(str1 + 1, str2 + 1); //Compara as strings sem sensitive-case.
}
/*

// Primeira ideia: 
//Recursão e usando um laço for:
/*	for (int i = 0; i <= (len1 - len2); i++) {
		for (int j = 0; i < len2; j++) {
			if (str1[i] == str2[i])
				if(ocorrencia(str1[i+1],str2[i+1]))
				return 1;
	}
	return 0;
}
*/


//Com dois laços for:

int ocorrencia(char* str1, char* str2){
	int s1 = strlen(str1);
	int s2 = strlen(str2);
	for(int i = 0; i < s1; i++) {
		int aux = 1;
		for (int j = 0; j < s2; j++) {
			if (tolower(str1[i+j]) != tolower(str2[j])) {
				aux = 0;
				break;
			}
		}
		if (aux) return 1;
	}
	return 0;
}

int main(int argc, char* argv[]) {
	//Defesa:
	if (argc != 3) { //Se o número de argumentos for diferente de 3
		printf("Error! Use: %s <string1> <string2>\n", argv[0]); //Acusa o formato correto
		return 1;
	}

	char* str1 = argv[1]; //Primeiro parâmetro recebe o primeiro input
	char* str2 = argv[2]; //Segundo parâmetro recebe o segundo input

	printf("%d\n", ocorrencia(str1, str2)); //Invoca a função
}




