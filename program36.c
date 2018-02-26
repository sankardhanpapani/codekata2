#include <stdio.h>
int main() {
	int i,count=0;
	char str[100];
	printf("Input\n");
	scanf("%[^/n]s",str);
	printf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
	if((str[i]>='0'&&str[i]<='9')||(str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='z'))
	{
			
	}
	else
	{	
	count++;
	}
	}
	printf("\n Output \n%d",count);
	return 0;
}
