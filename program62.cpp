#include <iostream>
#include <string.h>
using namespace std;

int main() {
char a[100]; 
int i,n,b=0;
cout<<"Input\n";
cin>>a;
cout<<a;
n=strlen(a);
cout<<"\nOutput\n";
for(i=0;i<n;i++)
{
if((a[i]=='0')||(a[i]=='1'))
{
	++b;
}
}
if(n==b)
{
	cout<<"yes";
}
else
{
	cout<<"no";
}
return 0;
}
