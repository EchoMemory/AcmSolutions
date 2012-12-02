#include <iostream>
#include <map>
#include <string>
//#include <cctype>
#include <iomanip>
using namespace std;
int main()
{
	string s;
	map<string,int> mp;
	map<string,int>::iterator it;
	int count=0;
	while( cin>>s )
	{
		int i;
		if( !isalnum(s[s.size()-1]) )
			s=s.substr(0,s.size()-1);
		mp[s]++;
		count++;
	}
	for( it=mp.begin(); it!=mp.end(); it++ )
	{
		double  p;
		p=it->second*100.0/count;
		cout<<setw(15)<<it->first<<":"<<setw(2)<<it->second<<" ";	
		cout<<setw(5)<<setiosflags(ios::fixed)<<setprecision(2)<<p<<"%\n";
	}
	return 0;
}