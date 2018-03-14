#include <stdio.h>
int main() {
	int i,c=1;
	char str[100];
	printf("Input\n");
	scanf("%[^/n]s",str);
	printf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			c++;
		}
	}
	printf("\nOutput \n%d",c);
	return 0;
	}
