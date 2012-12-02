#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
	char c;
	string s;
	while( cin >> c >> s )
	{
		map<char,int> mp;
		int count = 0;
		for( int i=0; i<s.size(); i++ )
			if( s[i]==c )
				count++;
		if( count>=(s.size()+1)/2 )
			cout << "Yes" <<endl;
		else
			cout << "No" <<endl;
	}
	return 0;
}