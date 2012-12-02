#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool f( string a, string b )
{
	int i=b.find(a);
	if( i!=-1 )
		return true;
	else
		return false;
}
int main()
{
	int n,m;
	while( cin>>n>>m )
	{
		int i,j,k;
		string s,t;
		vector<string> v;
		for( i=0; i<n; i++ )
		{
			cin>>s;
			v.push_back(s);
		}
		for( i=0; i<m; i++ )
		{
			cin>>t;
			int count=0;
			for( j=0; j<n; j++ )
				if( f(t,v[j]) )
					count++;
			cout<<count<<endl;
		}
		v.clear();
	}
	return 0;
}
