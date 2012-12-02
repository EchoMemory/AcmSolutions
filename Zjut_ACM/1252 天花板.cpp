#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a;
	int t;
	for( cin>>t; t>0; t-- )
	{
		cin>>a;
		cout<<(int)ceil(a)<<endl;
	}
	return 0;
}