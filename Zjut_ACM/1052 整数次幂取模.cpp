
#include <iostream>
using namespace std;
int main()
{
	int m,n,x;
	int r,i;
	while( cin>>m>>n>>x )
	{
		int sum=1;
		r=m%x;
		for( i=0; i<n; i++ )
			sum=sum*r%x;
		cout<<sum<<endl;
	}
	return 0;
}