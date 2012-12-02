#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	char s1[101],s2[101];
	int a[100];
	int i,j;
	unsigned n;
		for( cin>>n; n>0; n-- )
		{
			cin>>s1>>s2;
			for( i=0; i<100; i++ )
				a[i]=0;
			for( i=strlen(s1)-1; i>=0; i-- )
				a[strlen(s1)-1-i]=s1[i]-'0';
			for( i=strlen(s2)-1; i>=0; i-- )
				a[strlen(s2)-1-i]=abs(a[strlen(s2)-1-i]-(s2[i]-'0') );
			j=99;
			while( j>=0 && !a[j] )
				j--;
			if( j<0 )
				j=0;
			for( i=j; i>=0; i-- )
				cout<<a[i];
			cout<<endl;
		}
	return 0;
}