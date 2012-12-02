#include <iostream>
using namespace std;
int main()
{
	int n;
	int i,k;
	char s[33];

	while( cin>> n )
	{
		s[32]='\0';
		if( n>=0 )
		{
			for( k=n,i=31; k>0; k/=2,i-- )
				s[i]=k%2+'0';
			for( ; i>=0; i-- )
				s[i]='0';
			cout<<s<<"  "<<n<<endl;
		}
		else
		{
			for( k=n*(-1)-1,i=31; k>0; k/=2,i-- )
				s[i]=k%2+'0';
			for( k=31; k>i; k--)
			{
				if( s[k]=='0' )
					s[k]='1';
				else s[k]='0';
			}
			for( ; i>=0; i-- )
				s[i]='1';
			cout<<s<<"  "<<n<<endl; 
		}
	}
	return 0;
}

