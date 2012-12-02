#include <iostream>
using namespace std;
int a[10005];
int main()
{
	int i;
	for( i=1; i<10005; i++ )
	{
		int count=1,n=i;
		while( n!=1 )
		{
			if( n%2 )
				n=3*n+1;
			else
				n/=2;
			count++;
		}
		a[i]=count;
	}
	int n,m;
	while( cin>>n>>m )
	{
		int max=0,b,c,temp;
		b=n,c=m;
		if( b>c )
			temp=b,b=c,c=temp;
		for( i=b; i<=c; i++ )
			max=a[i]>max?a[i]:max;
		cout<<n<<' '<<m<<' '<<max<<endl;
	}
	return 0;
}