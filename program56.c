#include <stdio.h>
int main() {
	int i,c=0,c1=0;
	char str[100];
	printf("Input\n");
	scanf("%[^/n]s",str);
	printf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
		{
			++c;
		}
		else if(str[i]>='0'&&str[i]<='9')
		{
			++c1;
		}
	}
	printf("\nOutput \n");
	if(c!=0&&c1!=0)
	{
	printf("yes");
	}
	else
	{
		printf("No");
	}
	return 0;
	}
