#include <iostream>
#include <map>
using namespace std;
bool loop( int n )
{
	int j=n+1900;
	return ( ( j%4==0 && n%100!=0 ) || j%400==0 );
}
int main()
{
	int n;
	while( cin>>n )
	{
		int i,sum=0;
		map<int,int> mp;
		for( i=0; i<n; i++ )
		{
			if( loop(i) )
			{
				mp[(sum+7)%7]++;
				mp[(sum+38)%7]++;
				mp[(sum+67)%7]++;
				mp[(sum+98)%7]++;
				mp[(sum+128)%7]++;
				mp[(sum+159)%7]++;
				mp[(sum+189)%7]++;
				mp[(sum+220)%7]++;
				mp[(sum+251)%7]++;
				mp[(sum+281)%7]++;
				mp[(sum+312)%7]++;
				mp[(sum+342)%7]++;
				sum+=366;
				sum%=7;
			}
			else
			{
				mp[(sum+7)%7]++;
				mp[(sum+38)%7]++;
				mp[(sum+66)%7]++;
				mp[(sum+97)%7]++;
				mp[(sum+127)%7]++;
				mp[(sum+158)%7]++;
				mp[(sum+188)%7]++;
				mp[(sum+219)%7]++;
				mp[(sum+250)%7]++;
				mp[(sum+280)%7]++;
				mp[(sum+311)%7]++;
				mp[(sum+341)%7]++;
				sum+=365;
				sum%=7;
			}
		}
		for( i=1; i<=6; i++ )
			cout<<mp[i]<<" ";
		cout<<mp[0]<<endl;
	}
	return 0;
}
