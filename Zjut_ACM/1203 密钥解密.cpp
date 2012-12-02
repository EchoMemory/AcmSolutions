#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s,t;
	while( cin>>t )
	{
		getline(cin,s);
		getline(cin,s);
		int i;
		for( i=0; i<s.size(); i++ )
			s[i]=char((s[i]-32-(t[i%t.size()]-'0')+91)%91+32);
		cout<<s<<endl;
	}
	return 0;
}