#include <iostream>
#include <stdlib.h>
using namespace std;
struct ko{
	char s1[20];
	char s2[20];
};
int main()
{
	struct ko x[100],hold;
	int n,m;
	int temp,i,j,k;
	cin>>n;
	for( i=0; i<n; i++ )
	{
		cin>>m;
		for( j=0; j<m; j++ )
		{
			cin>>x[j].s1;
			for( k=0; x[j].s1[k]!='\0'; k++ )
			{
				if( x[j].s1[k]=='8' )
					x[j].s2[k]='1';
				if( x[j].s1[k]=='1' )
					x[j].s2[k]='2';
				if( x[j].s1[k]=='5' )
					x[j].s2[k]='3';
				if( x[j].s1[k]=='2' )
					x[j].s2[k]='4';
				if( x[j].s1[k]=='3' )
					x[j].s2[k]='5';
				if( x[j].s1[k]=='9' )
					x[j].s2[k]='6';
				if( x[j].s1[k]=='4' )
					x[j].s2[k]='7';
				if( x[j].s1[k]=='7' )
					x[j].s2[k]='8';
				if( x[j].s1[k]=='6' )
					x[j].s2[k]='9';
			}
			x[j].s2[k]='\0';
		}
		for( temp=0; temp<m; temp++ )
			for( j=0; j<m-temp-1; j++ )
				if( atoi(x[j].s2)>atoi(x[j+1].s2) )
				{
					hold=x[j];
					x[j]=x[j+1];
					x[j+1]=hold;
				}
		for( j=0; j<m; j++ )
			if( j==m-1 )
				cout<<x[j].s1<<endl;
			else
				cout<<x[j].s1<<" ";
	}
	return 0;
}