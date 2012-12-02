#include <iostream>
using namespace std;
int main()
{
	int n,m,g=0;
	while( cin>>n>>m )
	{
		int i,j,a,b,c;
		if( g++ )
			cout<<endl;
		//上半部分有n-m/2层
		b=m/2,a=n-b-2;
		for( i=0; i<a+1; i++ )
			cout<<' ';
		for( i=0; i<(m-3-4*a)/2; i++ )
			cout<<'X';
		for( i=0; i<2*a+1; i++ )
			cout<<' ';
		for( i=0; i<(m-3-4*a)/2; i++ )
			cout<<'X';
		cout<<endl;
		for( i=0; i<a; i++ )
		{
			for( j=0; j<a-i; j++ )
				cout<<' ';
			cout<<'X';
			for( j=0; j<(m-3-4*a)/2+2*i; j++ )
				cout<<' ';
			cout<<'X';
			for( j=0; j<2*(a-i)-1; j++ )
				cout<<' ';
			cout<<'X';
			for( j=0; j<(m-3-4*a)/2+2*i; j++ )
				cout<<' ';
			cout<<'X'<<endl;
		}
		for( j=0; j<2; j++ )
		{
			cout<<'X';
			for( i=0; i<(m-3)/2; i++ )
				cout<<' ';
		}
		cout<<'X'<<endl;
		//下半部分
		for( i=0; i<b-1; i++ )
		{
			c=2*(m/2-i-2)+1;
			for( j=0; j<i+1; j++ )
				cout<<' ';
			cout<<'X';
			for( j=0; j<c; j++ )
				cout<<' ';
			cout<<'X'<<endl;
		}
		for( i=0; i<b; i++ )
			cout<<' ';
		cout<<'X'<<endl;
	}
	return 0;
}