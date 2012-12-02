#include <iostream>
using namespace std;
void main()
{
	int a[47];
	int i;
	int n;
	a[0]=0;
	a[1]=1;
	for(i=2;i<47;i++)
		a[i]=a[i-1]+a[i-2];
	while(cin>>n)
		cout<<a[n]<<endl;
}

