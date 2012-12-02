#include <iostream>
using namespace std;
int main()
{
	int n;
	while( cin>>n && n!=-1 )
	{
		int i;
		int/*long long*/ a[34]={1},b[34]={0};
		for( i=1; i<=n; i++ )
		{
			a[i]=3*a[i-1]+2*b[i-1];
			b[i]=a[i-1]+b[i-1];
		}
		cout<<a[i-1]<<", "<<b[i-1]<<endl;
	}
	return 0;
}