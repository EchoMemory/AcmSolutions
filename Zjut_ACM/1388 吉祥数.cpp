#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	while( getline(cin,s) && s!="0" )
	{
		int i;
		int flag=0;
		int sum=0;
		for( i=0; i<s.size(); i++ )
		{
			sum=sum*10+s[i]-'0';
			sum%=7;
		}
		if( sum==0 )
			flag=1;
		for( i=0; i<s.size(); i++ )
			if( s[i]=='7' )
			{
				flag=1;
				break;
			}
		if( flag==1 )
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}
