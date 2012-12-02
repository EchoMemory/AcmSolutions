#include <iostream>
using namespace std;
char a[100][100];
int count,l,w;
void find(int i,int j)
{
	count++;
	a[i][j]='#';
	if( i>0 && a[i-1][j]=='*' ) find(i-1,j);
	if( j>0 && a[i][j-1]=='*' ) find(i,j-1);
	if( i<l-1 && a[i+1][j]=='*' ) find(i+1,j);
	if( j<w-1 && a[i][j+1]=='*' ) find(i,j+1);
}
		
int main()
{
	int i,j,can,ruan;
	
	while( cin>>l>>w && l && w )
	{
		can=0,ruan=0;
		for( i=0; i<l; i++ )
			for( j=0; j<w; j++ )
				cin>>a[i][j];
		for( i=0; i<l; i++ )
			for( j=0; j<w; j++ )
				if( a[i][j]=='*' )
				{
					count=0;
					find(i,j);
					can+=(count/2);
					if( count%2 )
						ruan++;
				}
		cout<<ruan<<' '<<can<<endl;
	}
	return 0;
}
