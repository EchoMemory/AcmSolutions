#include <iostream>
using namespace std;
int main()
{
	int m,g=0;
	cin >> m;
	while( m-- )
	{
		if ( g++ )
			cout << endl;
		int a,b,n,i,j;
		cin >> a >> b >> n;
		for( i=1; i<=a; i++ )
		{
			for( j=1; j<=b; j++ )
				cout << (i*j%n%2) ;
			cout << endl;
		} 
	}
	return 0;
}