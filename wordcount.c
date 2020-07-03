#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	FILE *file = NULL;
	int filesize = 0;
	char *buffer = NULL;
	char *word = NULL;
	int ct = 0;
	
	if (argc > 2) {
		printf("Utilizacao:\n\twordcount <ARQUIVO>\n\n");
		exit(1);
	}
	if ((file = fopen(argv[1], "r")) == NULL) {
		printf("Nao foi possivel abrir o arquivo\n\n");
		exit(1);
	}
	
	fseek(file, 0, SEEK_END);
	filesize = ftell(file);
	fseek(file, 0, SEEK_SET);
	buffer = (char*)malloc(filesize + 1);
	fread(buffer, 1, filesize, file);
	word = strtok(buffer, " \n\t");
	while (word) {
		if (*word)
			ct++;
		word = strtok(NULL, " \n\t");
	}
	printf("Total de palavras: %d\n", ct);
	free(buffer);
	fclose(file);
}
