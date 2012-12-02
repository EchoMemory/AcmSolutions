#include<iostream>
#include<iomanip>
using namespace std;
int i,t;
double a[400000];

int main()
{	a[1]=2.0/3;
	for( i=2,t=1; i<400000; i++,t*=-1 )
		a[i]=a[i-1]+t/(2*i*1.0+1);
	int n;
	while( scanf("%d",&n) && n)
	{
		cout<<setiosflags(ios::fixed)<<setprecision(8)<<4*a[n]<<endl;
	}
	return 0;
}
