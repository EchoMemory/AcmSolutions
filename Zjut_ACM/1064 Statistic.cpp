#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main()
{
	int i,j;
	char s[4][73];
	vector<char> v;
	map<char,int> m;
	map<char,int>::iterator it;
	for( i=0; i<4; i++ )
		gets(s[i]);
	for( i=0; i<4; i++ )
		for( j=0; s[i][j]!='\0'; j++ )
			if( s[i][j]>='A' && s[i][j]<='Z' )
				m[ s[i][j] ]++;
	int max=0;
	for( it=m.begin(); it!=m.end(); it++ )
		if( it->second > max )
			max=it->second;
	for( ; max>0; max-- )
	{
		for( char c='A'; c<='Z'; c++ )
			if( m[c]>0 )
			{
				if( m[c]>=max )
				{
					v.push_back('*');
					v.push_back(' ');
				}
				else
				{
					v.push_back(' ');
					v.push_back(' ');
				}
			}
		v.pop_back();
		v.push_back('\n');
	}
	for( char c='A'; c<='Z'; c++ )
		if( m[c]>0 )
		{
			v.push_back(c);
			v.push_back(' ');
		}
	v.pop_back();
	for( i=0; i<v.size(); i++ )
		cout<<v[i];
	cout<<endl;
	return 0;
}