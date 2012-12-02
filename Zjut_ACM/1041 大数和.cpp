#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char s[101];
	int sum[101]={0};
	int i,j;
	while( cin>>s && strcmp( s, "0" ) )
	{
		for( j=0,i=strlen(s)-1; i>=0&&j<=strlen(s)-1; i--,j++ )
			sum[100-j]+=s[i]-'0';
	}
	j=0;
	while( !sum[j] && j<102 )
		j++;
	for( i=100; i>j; i-- )
	{
		sum[i-1]=sum[i-1]+sum[i]/10;
		sum[i]%=10;
	}	
	if( j==102 )
		cout<<0;
	for( i=j; i<101; i++ )
		cout<<sum[i];
	return 0;
}
