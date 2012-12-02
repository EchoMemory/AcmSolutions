#include <iostream>
#include <algorithm>
using namespace std;
int sum=0;
void dummy(int* a,int n)
{
	int i;
	sum++;
	for (i=0;i<n-1;i++)
		cout<<a[i];
	if( sum%6!=0 )
		cout<<a[n-1]<<" ";
	else
		cout<<a[n-1]<<endl;
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
	int t;
	int g=0;
	for( cin>>t; t>0; t-- )
	{
		if( g++ )
			cout<<endl;
		int a[4],i;
		for( i=0; i<4; i++ )
			cin>>a[i];
		sort( a,a+4 );
		gen_perm(4,4,a);
	}
	return 0;
}
