#include <iostream>
#include <list>
using namespace std;
typedef struct{
	int a[100];
	int sum;
}OK;
int main()
{
	int t,i,j,k,l;cin>>t;
	OK v[101];
	for( i=1; i<101; i++ )
	{
		v[i].a[0]=i;
		v[i].sum=1;
	}
	while( t-- )
	{
		char c;
		int a,b;
		cin>>c;
		if( c=='C' )
		{
			cin>>a;
			int flag=0;
			for( i=1; i<101 && !flag; i++ )
				for( j=0,k=0; k<v[i].sum; k++,j++ )
					if( a==v[i].a[k] )
					{
						flag=1;
						break;
					}
			cout<<j<<endl;
		}
		else
		{
			cin>>a>>b;
			int flag=0;
			for( i=1; i<101 && flag!=2; i++ )
				for( k=0; k<v[i].sum; k++ )
				{
					if( a==v[i].a[k] )
					{
						j=i;
						flag++;
						break;
					}
					else if( b==v[i].a[k] )
					{
						l=i;
						flag++;
						break;
					}
				}
			for( i=0; i< v[j].sum; i++ )
			{
				v[l].a[v[l].sum]=v[j].a[i];
				v[j].a[i]=0;
				v[l].sum++;
			}
		}
	}
	return 0;
}