#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	string s;
	while( cin>>s )
	{
		int i,a=0,b,sum=0;
		char c;
		vector<int> v;
		vector<char> t;
		for( i=0; i<s.size(); i++ )
		{
			if( isdigit(s[i]) )
				a=10*a+s[i]-'0';
			else
				if( s[i]=='*' || s[i]=='/' )
				{
					c=s[i];
					b=0;
					for( i++; isdigit(s[i])&&i<s.size(); i++ )
						b=10*b+s[i]-'0';
					i--;
					if( c=='*' )
						a*=b;
					else
						if( c=='/' )
							a/=b;
				}
				else
				{
					c=s[i];
					v.push_back(a);
					a=0;
					t.push_back(c);
				}
		}
		v.push_back(a);
		sum+=v[0];
		for( i=0; i<t.size(); i++ )
			if( t[i]=='-' )
				sum-=v[i+1];
			else
				sum+=v[i+1];
		cout<<sum<<endl;
		v.clear();
		t.clear();
	}
	return 0;
}