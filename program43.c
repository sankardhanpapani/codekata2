#include <stdio.h>
int main() {
	char a[100];
	char b[200];
	printf("Input\n");
	scanf("%s",a);
	scanf("%s",b);
	printf("%s %s",a,b);
	printf("\nOutput\n%s%s",a,b);
	return 0;
}
