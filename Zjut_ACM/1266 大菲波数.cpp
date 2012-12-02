#include <iostream>
using namespace std;
int f[1001][300]={0};
int main()
{	
	f[0][0]=1,f[1][0]=1;
	for( int i=2; i<1001; i++ )
		for( int j=0; j<299; j++ )
		{
			f[i][j]+=(f[i-1][j]+f[i-2][j]);
			if( f[i][j]>=10 )
			{
				f[i][j+1]++;
				f[i][j]%=10;
			}
		}
	int t;
	for( cin>>t; t>0; t-- )
	{
		int n;
		cin>>n;
		n--;
		int k=299;
		while( !f[n][k] )
			k--;
		for( int i=k; i>=0; i-- )
			cout<<f[n][i];
		cout<<endl;
	}

	return 0;
}