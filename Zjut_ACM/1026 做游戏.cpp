/*
Sample Input:
2
3 1
1 2 3
3 2
1 2 3

Sample Output:
3 5 4
8 9 7
*/
#include <iostream>
using namespace std;
int main()
{
	int n,m,x;
	int i,j,k;
	int a[100];
	int hold;
	while( cin>>n )
	{
		for( i=0; i<n; i++ )
		{
			cin>>m>>x;
			for( j=0; j<m; j++ )
				cin>>a[j];			
			for( k=0; k<x; k++ )
			{
				hold=a[0];
				for( j=0; j<m; j++ )
				{
				
					if( j==m-1 )
						a[j]=(a[j]+hold)%100;
					else
						a[j]=(a[j]+a[j+1])%100;
				}
			}
			for( j=0; j<m; j++ )
			{
				if( j==m-1 )
					cout<<a[j];
				else
					cout<<a[j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}