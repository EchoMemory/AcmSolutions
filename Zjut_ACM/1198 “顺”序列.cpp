#include <iostream>
using namespace std;
void main()
{
	unsigned n;
	unsigned m;
	int a[100];
	int i,j,k;
	
	while( cin>>n )
	{
		for( i=0; i<n; i++ )
		{
			cin>>m;
			for( j=0; j<m; j++ )
					cin>>a[j];
			if( m<3 ) 
				cout<<"yes"<<endl;
			else
			{				
				for( int temp=0; temp<m; temp++ )
					for( j=0; j<m-temp-1; j++ )
					{
						if( a[j]>a[j+1] )
						{
							int hold=a[j];
							a[j]=a[j+1];
							a[j+1]=hold;
						}
					}
				for( k=0; k<m-2; k++ )
				{
					if( a[k]+a[k+2]!=2*a[k+1] )
					{
						cout<<"no"<<endl;
						break;
					}
				}
				if( k==m-2 )
					cout<<"yes"<<endl;
			}
		}
	}
}
