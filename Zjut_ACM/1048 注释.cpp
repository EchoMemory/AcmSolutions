#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int i,flag;
	vector<string> v;
	string s;
	while( getline(cin,s) )
	{
		flag=0;
		for( i=0; i<s.size(); i++ )
			if( s[i]=='/' && s[i+1]=='/' )
				break;
		s=s.substr(0,i);
		v.push_back(s);
	}
	for( i=0; i<v.size(); i++ )
		if( !v[i].empty() )
			cout<<v[i]<<endl;
	return 0;
}
