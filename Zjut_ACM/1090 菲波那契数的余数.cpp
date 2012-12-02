#include<iostream>
using namespace std;
int main()
{
	int a[5000]={0};
	a[0]=0,a[1]=1;
	int p,k;
	while( cin>>p>>k && p || k )
	{
		int temp=1;
		for( int i=0; i<k; i++ )
			temp*=2;
		for( int j=2; j<p; j++ )
			a[j]=(a[j-1]+a[j-2])%temp;
		cout<<a[p-1]<<endl;
	}
	return 0;
}
