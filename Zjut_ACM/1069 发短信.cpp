#include <iostream>
using namespace std;
int main()
{
	char s[300];
	int i;
	double count,sum=0.0;
	int a[26];
	for(i=0;i<18;i++)
		a[i]=i%3+1;
	a[18]=a[25]=4;
	a[19]=a[22]=1;
	a[20]=a[23]=2;
	a[21]=a[24]=3;

	while( gets( s ) )
	{
		count=0;
		char c;
		for( i=0; i<strlen(s); i++ )
		{
			c=tolower( s[i] );
			if( c>='a' && c<='z' )
				count+=a[c-'a'];
			else if( s[i]==' ' )
				count+=1;  
			else
				count+=2;
		}
		cout<<count*0.5+1<<endl;
		sum+=count+2;
	}
	cout<<sum*0.5<<endl;
	return 0;
}
