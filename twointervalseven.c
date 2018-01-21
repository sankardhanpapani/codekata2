#include <stdio.h>

int main()
{
int a,b,i;
scanf("%d",&a);
scanf("%d",&b);
printf("Input \n %d %d\n",a,b);
printf("Output\n");
for(i=++a;i<b;i++)
{
if((i%2)==0)
{
printf(" %d",i);	
}
}
return 0;
}
