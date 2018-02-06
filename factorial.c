#include <stdio.h>
int main()
{
int factorial =1;
int n,i;
scanf("%d",&n);
printf("Input\n%d\n",n);
if(n>=0)
{
for(i=1;i<=n;i++)
{
factorial *=i;	
}
printf("Output\n %d",factorial);
}
return 0;
}
