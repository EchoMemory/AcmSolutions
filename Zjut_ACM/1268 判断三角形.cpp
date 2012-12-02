#include <iostream>
using namespace std;
int main()
{
	int n;
	int a,b,c;
	int i;
	while( cin>>n )
	{
		for( i=0; i<n; i++ )
		{
			cin>>a>>b>>c;
			if( a<=0 || b<=0 || c<=0 )
				cout<<"NO"<<endl;
			else
				if( a+b>c && a+c>b && b+c>a )
					cout<<"YES"<<endl;
				else
					cout<<"NO"<<endl;
		}
	}
	return 0;
}