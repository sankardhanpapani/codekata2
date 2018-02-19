#include <stdio.h>
int main() {
	int i,j,count=0;
	char b[] = {'0','1','2','3','4','5','6','7','8','9'};
	char str[100];
	printf("Input\n");
	scanf("%[^/n]s",str);
	printf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		for(j=0;j<=9;j++)
		{
		if(str[i]==b[j])
		{
			count++;
		}
		}
	}
	printf("\n Output \n%d",count);
	return 0;
}
