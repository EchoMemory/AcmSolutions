#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double n;
	int count=0;
	while( cin>>n && n)
	{
		int x=pow(n,1.0/3);
		if( pow(x*1.0,3)==n || pow(x-1.0,3)==n || pow(x+1.0,3)==n )
			count++;
	}
	cout<<count<<endl;
	return 0;
}
