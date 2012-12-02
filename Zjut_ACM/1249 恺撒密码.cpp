#include <iostream>
#include <string>
using namespace std;
int main()
{
	int i,k;
	string s;
	cin>>k>>s;
	for( i=0 ;i<s.size(); i++ )
		s[i]=(s[i]-'a'+k)%26+'a';
	cout<<s<<endl;
	return 0;
}