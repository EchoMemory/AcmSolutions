#include <iostream>
using namespace std;
void main()
{
	unsigned int a,b,c;
	while(cin>>a>>b>>c&&a!=-1&&b!=-1&&c!=-1)
	{
		if(a<=168)
		{
			cout<<"CRASH "<<a<<endl;
		}
		else
			if(b<=168)
			{
					cout<<"CRASH "<<b<<endl;
			}
			else
				if(c<=168)
					cout<<"CRASH "<<c<<endl;
				else
					cout<<"NO CRASH"<<endl;
	}
}



