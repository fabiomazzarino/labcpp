#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char input[128] = "";
	int x = 0, y = 0;
	do {
		int ct = 0;
		
		printf("> ");
		scanf("%s", input);
		/* exit condition */
		if (input[0] == '\x0')
			break;
			
		/* is digit? */
		for (ct = strlen(input); ct--; )
			if (!isdigit(input[ct]))
				break;
				
		if (ct < 0) {
			y = x;
			x = atoi(input);
			
		} else {
			if (strlen(input) > 1) {
				printf("\tInvalid operator: %s\n", input);
				continue;
			}
			switch (input[0]) {
				case '+':  x = y + x; break;
				case '-':  x = y - x; break;
				case '*':  x = y * x; break;
				case '/':  x = y / x; break;
				case 'q':  printf ("\tquit\n"); exit(0);
				default:  printf("\tInvalid operator: %s\n", input); continue;
			}
		}
		printf("\t%d\n", x);
							
	} while (input[0] != '\x0');
	exit(0);
}
