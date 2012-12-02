#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	while( cin>>n && n )
	{
		int i,j,k;
		int a[250]={0},b[250]={0};//a放正数,b放负数
		char s[250];
		for( k=0; k<n; k++ )
		{
			cin>>s;
			if( s[0]=='-' )
				for( i=1; i<strlen(s); i++ )
					b[i-1]+=s[strlen(s)-i]-'0';
			else
				for( i=0; i<strlen(s); i++ )
					a[i]+=s[strlen(s)-i-1]-'0';
		}

		for( i=0; i<249; i++ )
		{
			a[i+1]+=a[i]/10;
			a[i]%=10;
		}
		for( i=0; i<249; i++ )
		{
			b[i+1]+=b[i]/10;
			b[i]%=10;
		}

		int flag=0;
		for( i=249; i>=0; i-- )
		{
			if( a[i]>b[i] )
			{
				flag=1;
				break;
			}
			else if( a[i]<b[i] )
			{
				flag=2;
				break;
			}
		}

		if( flag==0 )
			cout<<0<<endl;			
		else if( flag==1 )
		{
			for( i=0; i<=249; i++ )
				if( a[i]<b[i] )
				{
					a[i]=a[i]+10-b[i];
					a[i+1]--;
				}
				else
					a[i]-=b[i];
			j=249;
			while( !a[j] && j>=0 )
				j--;
			for( i=j; i>=0; i-- )
				cout<<a[i];
			cout<<endl;
		}
		else
		{
			for( i=0; i<=249; i++ )
				if( b[i]<a[i] )
				{
					b[i]=b[i]+10-a[i];
					b[i+1]--;
				}
				else
					b[i]-=a[i];
			k=249;
			while( !b[k] && k>=0 )
				k--;
			cout<<"-";
			for( i=k; i>=0; i-- )
				cout<<b[i];
			cout<<endl;
		}
	}
	return 0;
}