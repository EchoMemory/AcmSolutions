#include <iostream>
using namespace std;
struct ok{
	int side[4];//存放两个点
	int square;//存放面积
};
int main()
{
	struct ok x[ 100 ];
	struct ok hold;
	int n=0;
	int i;
	int temp;
	while( cin>>x[n].side[0]>>x[n].side[1]
		>>x[n].side[2]>>x[n].side[3] )
	{
		x[n].square=( x[n].side[0]-x[n].side[2] ) * ( x[n].side[1]-x[n].side[3] );
		if( x[n].square<0 )
			x[n].square*=-1;
		n++;
	}
	for( temp=0; temp<n; temp++ )
	{
		for( i=0; i<n-temp-1; i++ )
		{
			if( x[i].square > x[i+1].square )//交换结构体
			{
				hold=x[i];
				x[i]=x[i+1];
				x[i+1]=hold;
			}
		}
	}
	for( i=0; i<n; i++ )
		cout<<x[i].square<<endl;
	return 0;
}
