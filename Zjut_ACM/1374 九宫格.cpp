#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int t,a[3][3];
	int i,j;
	int flag;

	for( cin>>t; t>0; t-- )
	{
		flag=0;
		for( i=0; i<3; i++ )
			for( j=0; j<3; j++ )
				cin>>a[i][j];
		for( i=0; i<3; i++ )
			if( a[i][0]+a[i][1]+a[i][2] != 15
			|| a[0][i]+a[1][i]+a[2][i] != 15 )			
				{		cout<<"OMyGa!"<<endl;
				flag=1;
				break;
			}
		if( flag != 1 )
			if( a[0][0]+a[1][1]+a[2][2] != 15
			|| a[0][2]+a[1][1]+a[2][0] != 15 )
			{
				cout<<"OMyGa!"<<endl;
				flag=1;
				break;
			}
		if(  flag == 0 )
			cout<<"Cheers!"<<endl;
	}
	return 0;
}
