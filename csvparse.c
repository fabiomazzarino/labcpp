
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
	FILE *file = NULL;
	char line[512] = "";
	int ctrow = 0;
	
	if (argc > 2) {
		printf("Utilizacao:\n\twordcount <ARQUIVO>\n\n");
		exit(1);
	}
	if ((file = fopen(argv[1], "r")) == NULL) {
		printf("Nao foi possivel abrir o arquivo\n\n");
		exit(1);
	}
	
	while (fgets(line, 511, file)) {
		char *field = strtok(line, ";");
		int ctcol = 0;
		
		ctrow++;
		if (ctrow % 2)
			continue;
		while (field) {
			ctcol++;
			if (ctcol % 2 && ctcol != 7)
				printf("%s\t", field);
				
			if (ctcol == 7) {
				int ctextra = 0;
				char *extra = strtok(field, ":");
				while (extra) {
					if (ctextra > 0)
						printf(", ");
					printf("%s", extra);
					extra = strtok(NULL, ":");
					ctextra++;
				}
			} else {
				field = strtok(NULL, ";");
			}
			
		}
		printf("\n");
	}
	
	fclose(file);
}

