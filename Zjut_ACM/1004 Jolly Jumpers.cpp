#include <iostream>
using namespace std;
int main()
{
	unsigned n;
	int a[3000],i,j;
	int flag,hold;
	while( cin>>n )
	{
		hold=0;
		flag=0;
		for( i=0; i<n; i++ )
			cin>>a[i];
		for( i=0; i<n-1; i++ )
		{
			if( a[i]==a[i+1] )
			{
				flag=1;
				break;
			}
			else
			{
				if( a[i]-a[i+1] > 0 )
					a[i]=a[i]-a[i+1];
				else
					a[i]=a[i+1]-a[i];
			}
		}
		if( flag==1 )
			cout<<"Not jolly"<<endl;
		else
		{
			for( j=1; j<=n-1; j++ )
				for( i=0; i<n-1; i++ )
					if( a[i]==j )
					{
						hold++;
						break;
					}
			if( hold==n-1 )
				cout<<"Jolly"<<endl;
			else
				cout<<"Not jolly"<<endl;
		}
	}
	return 0;
}