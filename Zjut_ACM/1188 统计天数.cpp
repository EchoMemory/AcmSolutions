#include <iostream>
using namespace std;
void main()
{
	char days[100][14];
	int n=0;
	int i;
	int counter=0;

	while( gets(days[n]) )
		n++;
	for( i=0; i<n; i++ )
	{
		if( days[i][5]=='2' )
			if( days[i][6]=='5' )
			{
				counter++;
				if( days[i][12]=='*' )
					counter++;
			}
	}
	cout<<counter<<endl;
}