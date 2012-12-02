#include <iostream>
using namespace std;
int main()
{
	double h,u,d,f,sum;
	while( cin>>h>>u>>d>>f && h )
	{
		sum=0,f/=100;
		int day=0;
		while( sum>=0 )
		{
			if( 1-f*day > 0 )
				sum+=u*(1-f*day);
			if( sum>h )
			{
				day++;
				break;
			}
			sum-=d;
			day++;
		}
		if( sum>0 )
			cout<<"success on day "<<day<<endl;
		else
			cout<<"failure on day "<<day<<endl;
	}
	return 0;
}