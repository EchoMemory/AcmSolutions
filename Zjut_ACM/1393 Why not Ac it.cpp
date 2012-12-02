#include <iostream>
using namespace std;
int main()
{
	int t;
	for( cin>>t; t>0; t-- )
	{
		int a[100],n;
		int i,k=0;
		cin>>n;
		for( i=1; i<=n; i++ )
			if( n%i==0 )
				a[k++]=i;
		for( i=0; i<k; i++ )
			cout<<a[i];
		cout<<endl;
	}
	return 0;
}
