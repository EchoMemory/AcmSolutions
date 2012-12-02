#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
	int i;
	map<char,int> m;
	string s;
	getline(cin,s,'#');
	
	for( i=0; i<s.size(); i++ )
		if( s[i]>='a' && s[i]<='z' )
			m[ s[i] ]++;
	for( char j='a'; j<='z'; j++ )
		cout<<j<<" "<<m[j]<<endl;
	return 0;
}