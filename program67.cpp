#include <iostream>
using namespace std;
int main() {
	int a,i,count=1;
	cout<<"Input\n";
	cin>>a;
	cout<<a;
	for(i=1;i<=a;i++)
	{
	if(i%10==0)	
	{
		count ++;
	}}
		cout<<"\nOutput\n";
		cout<<(count*10);
	return 0;
}
