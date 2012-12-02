#include <iostream>
using namespace std;
const int a[2][12]={ 31,28,31,30,31,30,31,31,30,31,30,31,
				31,29,31,30,31,30,31,31,30,31,30,31 };
const char s[7][7]={ "Sun.","Mon.","Tus.","Wed.","Thr.","Fri.","Sat." };
bool loop( int n )
{
	return ( ( n%4==0 && n%100!=0 ) || n%400==0 );
}
int main()
{
	int year,month,day;
	int t;
	cin>>t;
	while( t-- )
	{
		scanf("%d-%d-%d",&year,&month,&day);
		int i,sum=0;
		for( i=1; i<year; i++ )
		{
			if( loop(i) )
			{
				sum+=366;
				sum%=7;
			}
			else
			{
				sum+=365;
				sum%=7;
			}
		}
		if( loop( year ) )
		{
			for( i=0; i<month-1; i++ )
				sum+=a[1][i];
			sum+=day;
			sum%=7;
		}
		else
		{
			for( i=0; i<month-1; i++ )
				sum+=a[0][i];
			sum+=day;

			sum%=7;
		}
		cout<<s[sum]<<endl;
	}
	return 0;
}