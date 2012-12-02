#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a;
	int b;
	int n;

	for( cin>>n; n>0; n-- )
	{
		cin>>a>>b;
		if( fabs(a-b)<=0.5 )
			cout<<"Correct"<<endl;
		else
			cout<<"Not Correct"<<endl;
	}
	return 0;
}