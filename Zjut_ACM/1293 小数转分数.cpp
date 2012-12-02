#include <iostream>
#include <cstdlib>
using namespace std;
int gcd( int x,int y)
{
	if( y==0 )
		return x;
	else return gcd( y,x%y );
}
int main()
{
	int t;
	for( cin>>t; t>0; t-- )
	{
		char s[12],a[10];
		cin>>s;
		int i,j=strlen(s),e=1;
		for( i=2; i<j; i++ )
		{
			a[i-2]=s[i];
		}
		a[j-2]='\0';
		int x=atoi(a);
		for( i=0; i<j-2; i++ )
			e*=10;
		int hold=gcd(x,e);
		cout<<x/hold<<"/"<<e/hold<<endl;
	}
	return 0;
}