#include <stdio.h>
int main() {
int N,A,D,a=0,i;
scanf("%d %d %d",&N,&A,&D);
printf("Input\n %d %d %d",N,A,D);
for(i=1;i<=N;i++)
{
a=a+(A*(i*D));
}
printf("\nOutput\n %d",a);
return 0;
}
