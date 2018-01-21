#include <stdio.h>
int main()
{
int n, i, a= 0;
scanf("%d",&n);
printf("Input\n%d\n",n);
for(i=2; i<=n/2; i++)
{
if(n%i==0)
{
a=1;
break;
}
}
if (a==0)
{
printf("Output\nYes\n");
} 
else
{
printf("Output\nNo");
}    
return 0;
}
