#include <iostream>
#include <cmath>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	string s,t;
	int flag=1;
	while( getline( cin,t ) && t!="#" )
	{
		int i;
		s=" ";
		s+=t;
		s+=" ";
		for( i=1; i<s.size()-1; i++ )
		{
			if( s[i]>='A' && s[i]<='Z' && s[i+1]>='A' && s[i+1]<='Z' )
			{
				flag=0;
				break;
			}
			if( (isalpha(s[i]) && isdigit(s[i+1])) || ( isdigit(s[i]) && isalpha(s[i+1])) )
			{
				flag=0;
				break;
			}
			if( s[i-1]==' ' && i<s.size()-1 && ( s[i]!=' ' && s[i]!='a' &&s[i]!='A' && s[i]!='I' ) && s[i+1]==' ' )
			{
				flag=0;
				break;
			}
			if( !isdigit(s[i]) && !isalpha(s[i]) && s[i]!=' ' && s[i]!='"' && !isdigit(s[i+1]) && !isalpha(s[i+1]) && s[i+1]!=' ' && s[i+1]!='"'  )
			{
				flag=0;
				break;
			}
		}
		if( flag )
			cout<<"OK"<<endl;
		else
			cout<<"suspicious"<<endl;
		flag=1;
	}
	return 0;
}

