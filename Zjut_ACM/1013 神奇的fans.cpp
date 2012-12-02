#include <iostream>
using namespace std;
int main()
{
	unsigned n,m;
	int i,j;
	unsigned a[100],hold;
	int temp;
	while( cin>>n )
	{
		for( i=0; i<n; i++ )
		{
			cin>>m;
			for( j=0; j<m; j++ )
				cin>>a[j];
			if( m==1 )
				cout<<"yes"<<endl;
			else
			{
				for( temp=0; temp<m; temp++ )
					for( j=0; j<m-temp-1; j++ )
						if( a[j]>a[j+1] )
						{
							hold=a[j];
							a[j]=a[j+1];
							a[j+1]=hold;
						}
				for( j=1; j<m-1; j++ )
					if( a[j]*2 != a[j-1]+a[j+1] )
						break;
				if( j==m-1 )
					cout<<"yes"<<endl;
				else
					cout<<"no"<<endl;
			}
		}
	}
	return 0;
}