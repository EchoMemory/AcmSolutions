#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
	string s,t;
	while( cin>>s )
	{
		map<string,int> mp;
		if( s[0]=='@' )
		{
			t=s.substr(1,s.size()-1);
			mp[t]++;
		}
		map<string,int>::iterator it;
		while( cin>>s && s[0]!='#' )		
			if( s[0]=='@' )
			{
				t=s.substr(1,s.size()-1);
				mp[t]++;
			}
			int max=0;
		for( it=mp.begin(); it!=mp.end(); it++ )
			if( it->second > max )
				max=it->second;
		for( it=mp.begin(); it!=mp.end(); it++ )
			if( it->second == max )
			{
				cout<<it->first<<endl;
				break;
			}
		mp.clear();
	}
	return 0;
}