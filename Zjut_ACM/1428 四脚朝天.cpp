#include <iostream>
using namespace std;
short a[20],b[20];
int main()
{
	while( cin>>a[0] )
	{
		b[0]=a[0];
		int i,count1=0,count2=0;
		for( i=1; i<20; i++ )
		{
			cin>>a[i];
			b[i]=a[i];
		}
		for( i=0; i<19; i++ )
			if( a[i] )
			{
				if( i!=18 )
				{
					a[i]=(!a[i]),a[i+1]=(!a[i+1]),a[i+2]=(!a[i+2]);
					count1++;
				}
				else
				{
					a[i]=(!a[i]),a[i+1]=(!a[i+1]);
					count1++;
				}
			}
		if( a[19] )
			count1=1000000;
		for( i=19; i>0; i-- )
			if( b[i] )
			{
				if( i!=1 )
				{
					b[i]=(!b[i]),b[i-1]=(!b[i-1]),b[i-2]=(!b[i-2]);
					count2++;
				}
				else
				{
					b[i]=(!b[i]),b[i-1]=(b[i-1]);
					count2++;
				}
			}
		if( a[0] )
			count2=1000000;
		cout<<(count1<count2?count1:count2)<<endl;
	}
	return 0;
}