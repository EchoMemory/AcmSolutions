#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1,s2;
	while( cin>>s1>>s2 )
	{
		int i,j,k=0,a[100]={0},b[100]={0};
		i=s1.find('.');
		if( i!=-1 )
		{
			for( j=i-1; j>=0; j-- )
				a[i-j-1]+=s1[j]-'0';
			for( j=i+1; j<s1.size(); j++ )
				b[k++]+=s1[j]-'0';
		}
		else
			for( j=s1.size()-1; j>=0; j-- )
				a[s1.size()-j-1]+=s1[j]-'0';
		k=0;
		i=s2.find('.');
		if( i!=-1 )
		{
			for( j=i-1; j>=0; j-- )
				a[i-j-1]+=s2[j]-'0';
			for( j=i+1; j<s2.size(); j++ )
				b[k++]+=s2[j]-'0';
		}
		else
			for( j=s2.size()-1; j>=0; j-- )
				a[s2.size()-j-1]+=s2[j]-'0';
		for( i=99; i>=1; i-- )
		{
			b[i-1]+=b[i]/10;
			b[i]%=10;
		}
		a[0]+=b[0]/10;
		b[0]%=10;
		for( i=0; i<99; i++ )
		{
			a[i+1]+=a[i]/10;
			a[i]%=10;
		}
		j=99,k=99;
		while( !a[j] && j>=0 )
			j--;
		if( j==-1 )
			j=0;
		while( !b[k] && k>=0 )
			k--;
		if( k==-1 )
			for( i=j; i>=0; i-- )
				cout<<a[i];
		else
		{
			for( i=j; i>=0; i-- )
				cout<<a[i];
			cout<<'.';
			for( i=0; i<=k; i++ )
				cout<<b[i];
		}
		cout<<endl;
	}
	return 0;
}