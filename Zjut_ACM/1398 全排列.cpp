#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool cmp( char a, char b )
{
	int c,d;
	if( a>='a' && a<='z' )
		c=(a-'a'+1)*2;
	else
		c=(a-'A')*2+1;
	if( b>='a' && b<='z' )
		d=(b-'a'+1)*2;
	else
		d=(b-'A')*2+1;
	return c<d;
}
int main()
{
	int n;cin>>n;
	while( n-- )
	{
		string s;
		cin>>s;
		sort(s.begin(),s.end(),cmp);
		do{
			cout<<s<<endl;
		}while(next_permutation(s.begin(),s.end(),cmp));
	}
	return 0;
}