#include <stdio.h>
 
int main() 
{
	int p,q,temp;
	scanf("%d %d",&p,&q);
	printf("Input\n%d %d",p,q);
	temp=p^q;
	p=p^temp;
	q=q^temp;
	printf("\nOutput\n%d %d",p,q);
	return 0;
}
 
