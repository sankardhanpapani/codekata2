#include <iostream>
using namespace std;
int main() {
	int a,i,count;
	cout<<"Input\n";
	cin>>a;
	cout<<a;
	for(i=1;i<=a;i++)
	{
	if(a%i==0)	
	{
		count ++;
	}}
	if(count==2)
	{
		cout<<"\nyes";
	}
	else
	{
		cout<<"\nno";
	}
	return 0;
}
