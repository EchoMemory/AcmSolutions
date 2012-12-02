#include <iostream>
#include <string>
using namespace std;
int a[]={0,5,7,5};
int main()
{
	string s[4],t="aeiouy";
	//getline(cin,s[0]);
	while( getline(cin,s[0]) && s[0]!="e/o/i" )
	{
		int i,j,k,l,count,flag=1;
		for( i=1; i<=2; i++ )
		{
			k=s[0].find("/");
			s[i]=s[0].substr(0,k)+" ";
			s[0]=s[0].substr(k+1,s[0].size()-k-1);
		}
		s[3]=s[0]+" ";
		for( i=1; i<=3; i++ )
		{
			count=0;
			for( j=0; j<s[i].size()-1; j++ )
			{
				k=t.find( s[i][j] );
				l=t.find( s[i][j+1] );
				if( k!=-1 && l==-1 )					
					count++;
			}
			if( count!=a[i] )
			{
				flag=0;
				cout<<i<<endl;
				break;
			}
		}
		if( flag )
			cout<<'Y'<<endl;
	}
	return 0;
}