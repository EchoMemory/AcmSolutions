#include <iostream>
#include <algorithm>
using namespace std;
int b[24][4],k=0;
void dummy(int* a,int n)
{
	int i;
	if( a[0]!=0 )
	{
		for( i=0; i<k; i++ )
			if( b[i][0]==a[0] && b[i][1]==a[1]
				&& b[i][2]==a[2] && b[i][3]==a[3] )
				break;
		if( i==k )
		{
			for ( i=0;i<n;i++)
				b[k][i]=a[i];
			k++;
		}
	}
}
void _gen_perm(int* a,int n,int m,int l,int* temp,int* tag){
	int i;
	if (l==m)
		dummy(temp,m);
	else
		for (i=0;i<n;i++)
			if (!tag[i]){
				temp[l]=a[i],tag[i]=1;
				_gen_perm(a,n,m,l+1,temp,tag);
				tag[i]=0;
			}
}

void gen_perm(int n,int m,int a[]){
	int temp[4],tag[4]={0};	
	_gen_perm(a,n,m,0,temp,tag);
}
int main()
{
	int g=0;
	int a[4];
	while( cin>>a[0]>>a[1]>>a[2]>>a[3] &&  (a[0] || a[1] || a[2] || a[3]) )
	{
		if( g++ )
			cout<<endl;
		int i,j;
		sort( a,a+4 );
		gen_perm(4,4,a);
		for( i=0; i<4; i++ )
			cout<<b[0][i];
		for( i=1; i<k; i++ )
		{
			if( b[i][0]!=b[i-1][0] )
				cout<<endl;
			else
				cout<<" ";
			for( j=0; j<4; j++ )
				cout<<b[i][j];			
		}
		cout<<endl;
		k=0;
	}
	return 0;
}
