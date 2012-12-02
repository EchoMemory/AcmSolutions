#include <iostream>
using namespace std;
struct ok{
	char s[100];
	int counter;
};
int main()
{
	struct ok x[100],hold;
	int i;
	int n=0;
	int temp;
	while( cin>>x[n].s )
	{
		x[n].counter=0;
		for( i=0; x[n].s[i]!='\0'; i++ )
			if( x[n].s[i]=='1' )
				x[n].counter++;
		n++;
	}
	for( temp=0; temp<n; temp++ )
		for( i=0; i<n-temp-1; i++ )
			if( x[i].counter > x[i+1].counter )
			{
				hold=x[i];
				x[i]=x[i+1];
				x[i+1]=hold;
			}
	for( i=0; i<n; i++ )
		cout<<x[i].s<<endl;
	return 0;
}