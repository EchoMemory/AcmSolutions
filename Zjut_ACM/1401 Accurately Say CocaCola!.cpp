#include <iostream>
using namespace std;
short a[]={0,7,27,70,70,70,70,70,70,70,70,270};
int main()
{
	int i;
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		if( n>11 )
			cout<<700<<endl;
		else
			cout<<a[n]<<endl;
	}
	return 0;
}