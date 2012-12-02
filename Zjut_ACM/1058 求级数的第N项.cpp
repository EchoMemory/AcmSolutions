#include <iostream>
using namespace std;
void main()
{
	int n;
	int i;
	int a[16];
	a[1]=0,a[2]=2;
	for(i=3;i<=16;i++)
		a[i]=3*a[i-1]+5*a[i-2];
	while(cin>>n&&n!=0)
		cout<<a[n]<<endl;
}

