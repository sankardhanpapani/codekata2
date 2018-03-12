#include <iostream>
using namespace std;

int main() {
char c[100]; 
int i,n;
cout<<"Input\n";
cin>>c>>n;
cout<<c<<"\t"<<n;
cout<<"\nOutput\n";
for(i=0;i<n;i++)
{
cout<<c[i];
	
}
return 0;
}
