#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
int main()
{
	string s;
	while( cin>>s )
	{
		int i,flag=1;
		double a=0,b,sum=0,e;
		char c;
		vector<double> v;
		vector<char> t;
		for( i=0; i<s.size(); i++ )
		{
			e=-1.0;
			if( isdigit(s[i]) )
				a=10*a+s[i]-'0';
			else if( s[i]=='.' )
			{
				while( i<s.size() && isdigit(s[++i]) )
				{				
					a+=pow(10.0,e)*(s[i]-'0');
					e--;
				}
				i--;
			}
			else if( s[i]=='*' || s[i]=='/' )
				{
					c=s[i];
					b=0;
					for( i++; isdigit(s[i])&&i<s.size(); i++ )
						b=10*b+s[i]-'0';
					e=-1.0;
					if( s[i]=='.' )
						while( isdigit(s[++i]) )
						{							
							b+=pow(10.0,e)*(s[i]-'0');
							e--;
						}
						i--;
						if( c=='*' )
							a*=b;
						else if( b==0 )
						{
							flag=0;
							break;
						}
						else
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
		if( !flag )
		{
			cout<<"DivByZero"<<endl;
			continue;
		}
		sum+=v[0];
		for( i=0; i<t.size(); i++ )
			if( t[i]=='-' )
				sum-=v[i+1];
			else
				sum+=v[i+1];
			printf( "%.6le\n",sum);
	}
	return 0;
}