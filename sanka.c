#include<stdio.h>
int main() 
{
int i,j,N,K,b=1;
scanf("%d",&N);
scanf("%d",&K);
printf("Input\n %d %d\n",N,K);
for(i=1;i<=K;i++)
{
b=(b*N);
}
printf("Output\n %d ",b);
return 0;
}

