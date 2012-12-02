#include <iostream>
#include <map>
#include <vector>
using namespace std;
map<vector<int>,__int64> mp;
__int64 f( vector<int> v )
{
	if( v.size()==1 )
		return 1;
	if( mp.find(v)!=mp.end() )
		return mp[v];
	vector<int> _v=v;
	__int64 hold=0;
	for( int i=0; i<v.size()-1; i++ )
	{
		if( v[i]==v[i+1] )
			continue;
		_v[i]--;
		hold+=f(_v);
		_v[i]++;
	}
	if( v[v.size()-1]>1 )
	{
		_v[v.size()-1]--;
		hold+=f(_v);
	}
	else
	{
		_v.pop_back();
		hold+=f(_v);
	}
	mp[v]=hold;
	return hold;
}
int main()
{
	int n;
	while( cin>>n && n )
	{
		mp.clear();
		vector<int> v(n);
		for( int i=0; i<n; i++ )
			cin>>v[i];
		printf( "%I64d\n",f(v));
	}
	return 0;
}