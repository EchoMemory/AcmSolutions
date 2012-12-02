#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	const double sum =4.5*3600;
	int n;
	while( cin>>n )
	{
		int i,v,t;
		double min,res;
		min=100000000;
		for( i=0; i<n; i++ )
		{
			cin>>v>>t;
			if( t>=0 )
			{
				res=sum/v+t;
				if( res<min )
					min=res;
			}
		}
		cout<<ceil(min)<<endl;
	}
	return 0;
}

