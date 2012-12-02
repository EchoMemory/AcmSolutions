#include <iostream>
using namespace std;
int main()
{
	int n,m;
	int i,j,k,x;
	char c;

	while( cin>>m>>n )
	{
		c='A';
		for( i=0; i<m; i++ )
		{
			for( j=0,x=0; j<n; j++ )
			{
				for( k=0; k<n-j-1; k++ )
					cout<<" ";
				for( k=0; k<2*j+1; k++,x++ )
					cout<<char(c+x);
				cout<<endl;
			}			
		}
	}
	return 0;
}
