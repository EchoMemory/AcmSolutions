#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int t,flag=0;
	for( cin>>t; t>0; t-- )
	{
		if( flag++ )
			cout<<endl;
		int m,k,i,j;
		cin>>m>>k;
		int M=m*m;
		int a[9][9];
		for( i=0; i<m; i++ )
		{
			if(i%2==0)
				for( j=0; j<m; j++)
				{
					a[i][j]=k;
					k=k%M+1;
				}
			else
				for( j=m-1; j>=0; j--)
				{
					a[i][j]=k;
					k=k%M+1;
				}

		}
		for( i=0; i<m; i++ )
		{
			for( j=0; j<m; j++ )
				cout<<setw(4)<<a[i][j];
			cout<<endl;
		}
	}
	return 0;
}