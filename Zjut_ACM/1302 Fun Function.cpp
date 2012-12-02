#include <iostream>
using namespace std;
int w[25][25][25];
int _w(int a,int b,int c)
{
	if(a<=0 || b<=0 || c<=0 )
		return 1;
	else if( a>20 || b>20 || c>20 )
		return w[20][20][20];
	else if( a<b && b<c )
		return w[a][b][c-1]+w[a][b-1][c-1]-w[a][b-1][c];
	else
		return w[a-1][b][c]+w[a-1][b-1][c]+w[a-1][b][c-1]-w[a-1][b-1][c-1];
}
int main()
{
	int i,j,k;
	for( i=0; i<=20; i++ )
		for( j=0; j<=20; j++ )
			for( k=0; k<=20; k++ )
			{
				if(i==0 || j==0 || k==0 )
					w[i][j][k]=1;
				else if( i<j && j<k )
					w[i][j][k]=w[i][j][k-1]+w[i][j-1][k-1]-w[i][j-1][k];
				else
					w[i][j][k]=w[i-1][j][k]+w[i-1][j-1][k]+w[i-1][j][k-1]-w[i-1][j-1][k-1];
			}
	int a,b,c;
	while( cin>>a>>b>>c && ( a!=-1 || b!=-1 || c!=-1 ) )
		printf("w(%d, %d, %d) = %d\n",a,b,c,_w(a,b,c));
	return 0;
}