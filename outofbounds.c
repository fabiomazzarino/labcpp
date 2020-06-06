#include <stdio.h>

int main() {
	char s1[] = "0123456789";
	char s2[] = "ABCDEFGHIJ";
	char s3[] = "abcdefghij";
	char c = 'a';
	int ct = 0;
	
	printf("Step 0\ns1: [%s]\ns2: [%s]\ns3: [%s]\n\n", s1, s2, s3);
	
	for (ct = 0, c = 'a'; ct < 20; ct++, c++) 
		s2[ct] = c; 
	s2[ct] = '\x0';
	printf("Step 1\ns1: [%s]\ns2: [%s]\ns3: [%s]\n\n", s1, s2, s3);
	
	for (ct = 0, c = '9'; ct > -10; ct--, c--)
		s2[ct] = c;
	printf("Step 2\ns1: [%s]\ns2: [%s]\ns3: [%s]\n\n", s1, s2, s3);
	
}
