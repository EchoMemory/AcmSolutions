#include <iostream>
using namespace std;
int main()
{
	char s1[12];
	int i,k=0,count;

	while( cin>>s1 )
	{
		count=0;
		for( i=2; i<11; i++ )
		{
			if( s1[i]=='4' )
			{
				count=0;
				break;
			}
			if( s1[i]=='6' || s1[i]=='8' )
			count++;
		}
		if( count>=5 )
		{
			cout <<s1<<endl;
			k++;
		}
	}
	cout<<k<<endl;
	return 0;
}
