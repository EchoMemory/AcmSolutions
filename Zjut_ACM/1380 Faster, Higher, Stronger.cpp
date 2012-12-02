#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	char s[20];
	int n,m;
	for( cin>>n; n>0; n-- )
	{
		int j,k;
		vector<int> v;	
		cin>>s;
		for( cin>>m; m>0; m-- )
		{
			cin>>k;
			v.push_back( k );
		}
		sort( v.begin(), v.end() );
		j=v.size();
		if( s[0]=='F' )
			cout<<v[0]<<endl;
		if( s[0]=='H' )
			cout<<v[j-1]<<endl;
		if( s[0]=='S' )
			cout<<v[j-1]<<endl;
		v.clear();
	}
	return 0;
}
