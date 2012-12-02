#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int n;
	int j;
	int len;
	char hold;

		for( cin>>n;n>0;n-- )
		{
			char s[1000];
			cin>>s;
			len=strlen( s );
			if( s[0]=='-' )
				for( j=1; j<=len/2; j++ )
				{
					hold=s[j];
					s[j]=s[len-j];
					s[len-j]=hold;
				}
			else
				for( j=0; j<len/2; j++ )
				{
					hold=s[j];
					s[j]=s[len-j-1];
					s[len-j-1]=hold;
				}
			cout<<s<<endl;
		}
	
	return 0;
}