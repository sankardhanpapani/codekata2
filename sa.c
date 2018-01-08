#include <stdio.h>
#include<string.h>

int main(void) {
int n,i=0;
char a[50];
scanf("%s",&a[i]);
printf("INPUT %s ",a);
n=strlen(a);
printf("OUTPUT\n");
for(i=0;i<=n;i++)
{
if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
printf("Vowel");
else
printf("Consonant");
	return 0;
}
}
