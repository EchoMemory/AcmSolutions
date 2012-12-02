#include <iostream>
#include <cmath>
using namespace std;
int gcd(int x,int y)
{
	if( y==0 )
		return x;
	else
		return gcd(y,x%y);
}
int main()
{
	//printf("%.10lf\n%.10lf\n%.10lf\n",2.0/32767/32766,1.0/32767,1.0/32766);
	int n,m;
	while( cin>>n>>m )
	{
		int i;
		double min=10000;
		int x,y;
		for( i=32767; i>=2; i-- )
		{
			int a=(int)(n*1.0*i/m);
			if( fabs(n*1.0/m-(a-1)*1.0/i)<min )
			{
				min=fabs(n*1.0/m-(a-1)*1.0/i);
				x=a-1,y=i;
			}
			if( i%m && fabs(n*1.0/m-a*1.0/i)<min )
			{
				min=fabs(n*1.0/m-a*1.0/i);
				x=a,y=i;
			}
			if( fabs(n*1.0/m-(a+1)*1.0/i)<min )
			{
				min=fabs(n*1.0/m-(a+1)*1.0/i);
				x=a+1,y=i;
			}			
		}
		cout<<x/gcd(x,y)<<' '<<y/gcd(x,y)<<endl;
	}
	return 0;
}