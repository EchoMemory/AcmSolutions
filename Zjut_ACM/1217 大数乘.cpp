#include <iostream>
#include <string>
using namespace std;
int main()
{
	int i,j,k;
	string s,t;
	while( cin>>s>>t )
	{
		if( s=="0" && t=="0" )
			break;
		if( s=="0" || t=="0" )
		{
			cout << 0 << endl;
			continue;
		}
		int flag=0;
		if( s[0]=='-' && t[0]=='-' )
			s=s.substr(1,s.size()-1),t=t.substr(1,t.size()-1);
		if( s[0]=='-' && t[0]!='-' )
			s=s.substr(1,s.size()-1),flag=1;
		if( s[0]!='-' && t[0]=='-' )
			t=t.substr(1,t.size()-1),flag=1;
		int a[405]={0};
		for( i=s.size()-1; i>=0; i-- )
			for( j=t.size()-1; j>=0; j-- )
				a[s.size()+t.size()-i-j-2]+=(s[i]-'0')*(t[j]-'0');

		for( j=0; j<400; j++ )
		{
			a[j+1]+=a[j]/10;
			a[j]%=10;
		}
		k=400;
		while( !a[j] )
			j--;
		if( flag )
			cout << '-';
		for( k=j; k>=0; k-- )
			cout<<a[k];
		cout<<endl;
	}
	return 0;
}