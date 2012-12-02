#include <iostream>
using namespace std;
int main()
{
	int h1,a1,h2,a2,b;
	while( cin>>h1>>a1>>h2>>a2>>b )
	{
		int count;
		if( h1%a2==0 )
			count=h1/a2;
		else
			count=h1/a2+1;
		int max=a1*(count-1);
		if( max<h2 )
			cout<<count<<endl;
		else if( a1<b )
		{
			while( max>=h2 )
			{
				h2+=b;
				h2-=a1;
				count++;
			}
			cout<<count<<endl;
		}
		else
			cout<<"Sorry,Miss Moonlight!"<<endl;
	}
	return 0;
}

