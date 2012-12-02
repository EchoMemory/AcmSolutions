#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
	int g=0;
	string s;
	while( cin>>s )
	{
		if( g++ )
			cout<<endl;
		map<int,int> mp;
		map<int,int>::iterator it;
		for( int i=0; i<s.size(); i++ )
			mp[s[i]-'0']++;
		for( it=mp.begin(); it!=mp.end(); it++ )
			cout<<it->first<<" "<<it->second<<endl;
	}
	return 0;
}