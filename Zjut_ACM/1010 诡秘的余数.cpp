#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char str[100];
	int n,sum,i;
	while( cin>>str>>n )
	{
		sum=0;
		for( i=0; i<strlen( str ); i++ )
		{
			sum=sum*10+str[i]-'0';
			sum%=n;
		}
		cout <<sum<<endl;
	}
	return 0;
}
