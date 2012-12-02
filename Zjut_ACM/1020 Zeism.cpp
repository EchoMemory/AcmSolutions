#include <iostream>
#include <string>
#include <bitset>
using  namespace  std;
int main()
{
	string t,s[100];
	while( cin>>t && t!="0" )
	{
		int i,j,n,m=t.size();
		n=m/30;
		for( i=0; i<n; i++ )
		{
			m=t.size();
			s[i]=t.substr(m-30,30);
			t=t.substr(0,m-30);
		}
		s[i]=t;
		for( i=0; i<=n; i++ )
		{
			bitset<30> mybits(s[i]);     // mybits: 0000
			cout << mybits<<"as an integer is: " << mybits.to_ulong()<< endl;
		}
	}
    return  0;
  }