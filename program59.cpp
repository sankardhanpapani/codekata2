#include <iostream>
using namespace std;

int main() {
int a[10],i,temp=0;
cout<<"Input\n";
for(i=1;i<=10;i++)
{
	cin>>a[i];
	cout<<a[i]<<"\t";
}
for(i=1;i<=10;i++)
{
	if(a[i]>temp)
	{
		temp=a[i];
	}
}
cout<<"\nOutput\n"<<temp;
	return 0;
}
