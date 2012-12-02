#include <iostream>
#include <vector>
using namespace std;
void new_line()
{
	char c;
	do
	{
		cin.get(c);
	}while( c!='\n' );
}
int main()
{
	int t;
	for( cin>>t; t>0; t-- )
	{
		vector<char> v;
		new_line();
		char s[101];
		cin>>s;
		int i;
		for( i=0; i<strlen(s); i++ )
			if( s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' )
				v.push_back(s[i]);
		for( i=0; i<v.size(); i++ )
			cout<<v[i];
		cout<<endl;
		v.clear();
	}
	return 0;
}