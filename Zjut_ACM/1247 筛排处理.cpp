#include <iostream>
#include <set>
using namespace std;
int main()
{
	int n;
	int g=0;
	while( cin>>n )
	{
		if( g++ )
			cout<<endl;
		int i,a,k=0;
		set<int> b;
		set<int>::iterator it;
		for( i=0; i<n; i++ )
		{
			cin>>a;
			b.insert(a);
		}
		cout<<b.size()<<endl;

		for( it=b.begin(); it!=b.end(); it++ )
		{
			if( k%10 )
				cout<<" ";
			k++;
			cout<<*it;
			if( k%10==0 )
				cout<<endl;
		}
		if( k%10 )
				cout<<endl;
	}

	return 0;
}