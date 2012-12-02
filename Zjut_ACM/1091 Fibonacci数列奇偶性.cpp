#include <iostream>
using namespace std;
void main()
{
	int n;
	int i;
	unsigned long int a[10000];
	a[1]=1,a[2]=1;
	for(i=3;i<=10000;i++)
		a[i]=a[i-1]+a[i-2];
	while(cin>>n&&n!=0)
	{
		if(a[n]%2==1)
			cout<<"ODD"<<endl;
		else
			cout<<"EVEN"<<endl;
	}
}

