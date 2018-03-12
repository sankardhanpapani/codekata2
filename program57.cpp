#include <iostream>
using namespace std;

int main() {
int a,b;
cout<<"Input\n";
cin>>a>>b;
cout<<a<<"\t"<<b;
a=a^b;
b=a^b;
a=a^b;
cout<<"\nOutput\n"<<a<<"\t"<<b;
	return 0;
}
