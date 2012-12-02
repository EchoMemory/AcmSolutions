#include <iostream>
using namespace std;
int pfh( int x )//求整数各位数字的平方和
{
	int i;
	int result=0;
	for( i=0; x>0; x/=10,i++ )
		result+=(x%10)*(x%10);
	return result;
}
struct ok{
	int a;
	int he;//he为平方和
};
void main()
{
	int n;
	int i;
	int temp;
	struct ok x[ 1000 ];
	struct ok hold;
	while( cin>>n && n )
	{
		for( i=0; i<n; i++ )
		{
			cin>>x[i].a;
			x[i].he=pfh( x[i].a );
		}
		for( temp=0; temp<n; temp++ )
			for( i=0; i<n-temp-1; i++ )
			{
				if( x[i].he > x[i+1].he )
				{
					hold=x[i];
					x[i]=x[i+1];
					x[i+1]=hold;
				}
			}

		for( i=0; i<n-1; i++ )
			cout<<x[i].a<<" ";
		cout<<x[i].a<<endl;
	}
}


	
