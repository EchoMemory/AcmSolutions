#include <iostream>
#include <bitset>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	int t;
	for( cin>>t; t>0; t-- )
	{
		int n,m,i,count=0;
		unsigned k,temp=(unsigned)(pow(2.0,30.0)-1);
		string s;
		cin>>n>>m;
		for( i=0; i<n; i++ )
		{
			cin>>k;
			temp&=k;
		}
		bitset<32> b(temp);
		s=b.to_string();
		for( i=0; i<32; i++ )
			if( s[i]=='1' )
				count++;
		cout<<count<<endl;
	}
	return 0;
}
		