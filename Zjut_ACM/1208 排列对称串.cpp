#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
vector<string> v;
bool cmp( string a,string b )
{
	if( a.size()==b.size() )
		return a<b;
	else 
		return a.size()<b.size();
}
int main()
{
	string s;
	
	while( getline( cin, s ) )
	{
		int i,j;
		for( i=0,j=s.size()-1; i<j; i++,j-- )
			if( s[i]!=s[j] )
				break;
		if( i>=j )
			v.push_back(s);
	}
	sort( v.begin(),v.end(),cmp );
	for( int i=0; i<v.size(); i++ )
		cout<<v[i]<<endl;
	return 0;
}