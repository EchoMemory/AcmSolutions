#include <iostream>
using namespace std;
int main()
{
	int a,n;
	while( cin>>a>>n )
	{
		int i,j;
		int sum[10]={0};
		for( i=0; i<n; i++ )
			sum[i]+=(n-i)*a;
		for( i=0; i<9; i++ )
		{
			sum[i+1]+=sum[i]/10;
			sum[i]%=10;
		}
		j=9;
		while( !sum[j] )
			j--;
		for( i=j; i>=0; i-- )
			cout<<sum[i];
		cout<<endl;
	}
	return 0;
}