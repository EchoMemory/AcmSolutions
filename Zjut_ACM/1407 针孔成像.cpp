#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while( t-- )
	{
		double a,b,h,res;
		cin>>a>>b>>h;
		res=b/a*h;
		printf("%.2lf\n",res);
	}
	return 0;
}