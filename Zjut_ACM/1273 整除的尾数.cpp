#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	string s,t;
	int n,sum,i,j;
	while( cin>>s>>n )
	{
		vector<char> v;
		sum=0;
		for( j=0; j<s.size(); j++ )
		{
			sum=sum*10+s[j]-'0';
			sum%=n;
		}
		sum*=100;
		for( i=0; i<=99; i++ )
		{
			if( (sum+i)%n==0 )
			{
				if( i<10 )
				{
					v.push_back('0');
					v.push_back(i+'0');
					v.push_back(' ');
				}
				else
				{
					v.push_back(i/10+'0');
					v.push_back(i%10+'0');
					v.push_back(' ');
				}
			}
		}
		v.pop_back();
		for( i=0; i<v.size(); i++ )
			cout<<v[i];
		cout<<endl;
	}
	return 0;
}
