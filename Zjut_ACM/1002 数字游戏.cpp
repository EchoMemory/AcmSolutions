
#include <iostream>
#include <cmath>
using namespace std;
int main()
{ 
	unsigned n;
	int i,j,a,flag;
	while( cin>>n && n )
	{
		if( n==1 )
			cout<<1<<" "<<1<<endl;
		else
		{
			for( i=0; i<16; i++ )
			{
				flag=0;
				a=pow( n*1.0,1.0/(2.0+i) )+0.5;
				for( j=2; a>1 && pow(a*1.0,j*1.0)<=n; j++ )
					if( (int)pow(a*1.0,j*1.0)==n )
					{
						cout<<a<<" "<<j<<endl;
						flag=1;
						break;
					}
				if( flag==1 || a<=1 )
					break;
			}
			if( flag==0 || i==16 )
				cout<<0<<" "<<0<<endl;
		}
	}
  return 0;
}
