#include <iostream>
#include <cmath>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	double a,b,c,d;
	while( cin>>a>>b>>c>>d && a && b && c && d )
	{
		if( a/b <=1 )
		{
			int temp=a;
			a=b;
			b=temp;
		}
		if( c/d <=1 )
		{
			double temp=c;
			c=d;
			d=temp;
		}
		if( a<=c && b<=d )
		{
			cout<<"100%"<<endl;
			continue;
		}
		int sum=(c/a)<(d/b)?(int)(c/a*100.0):(int)(d/b*100.0);
		cout<<sum<<'%'<<endl;
	}
	return 0;
}