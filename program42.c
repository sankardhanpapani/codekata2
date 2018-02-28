#include <stdio.h>
#include<string.h>
int main() {
	int a,b;
	char c[100],d[100];
	printf("Input\n");
	scanf("%s",c);
	scanf("%s",d);
	printf("%s %s\n",c,d);
	a=strlen(c);
	b=strlen(d);
	if(a>b)
	{
	printf("Output\n%s",c);
	}
	else if(a<b)
	{
	printf("Output\n%s",d);
	}
	else
	{
	printf("Output\n%s",d);
	}
	return 0;
}
