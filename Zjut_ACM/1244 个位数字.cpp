#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	int t;
	for( cin>>t; t>0; t-- )
	{
		string s1,s2;
		cin>>s1>>s2;
		int a,b;
		a=s1[ s1.size()-1 ]-'0';
		if( s2.size()<2 )
			b=s2[0]-'0';
		else
			b=10*(s2[ s2.size()-2 ]-'0')+s2[ s2.size()-1 ]-'0';		
		b%=4;
		b+=4;
		cout<<((int)pow( a*1.0,b*1.0 ))%10<<endl;
	}
	return 0;
}