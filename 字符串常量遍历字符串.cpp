#include <stdio.h>

int main() {
	char *s = "adasd";
	while(*s != '\0') {
		printf("%c", *s);
		s++;
	}
//	printf("%c ", s[5]);
	return 0;
}
