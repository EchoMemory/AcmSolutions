#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp( string a, string b )
{
	int i;
	for( i=0; i<a.size(); i++ )
		a[i]=tolower(a[i]);
	for( i=0; i<b.size(); i++ )
		b[i]=tolower(b[i]);
	return a<b;
}
int main()
{
	int n;
	int i;
	vector<string> v,t;
	string s;
		
	while( getline( cin,s ) )
	{
		for( i=0; i<s.size(); i++ )
			if( s[i]==' ' )
			{
				if( s[i+1]=='D' )
					v.push_back(s);
				else
					t.push_back(s);
			}
	}
	sort( v.begin(), v.end(), cmp );
	sort( t.begin(), t.end(), cmp );
	for( i=0; i<v.size(); i++ )
		cout<<v[i]<<endl;
	for( i=0; i<t.size(); i++ )
		cout<<t[i]<<endl;
	return 0;
}
