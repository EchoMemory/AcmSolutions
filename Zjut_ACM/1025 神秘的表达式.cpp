#include <iostream>
using namespace std;
void main()
{
	int z,u,t;
	int n;
	int i;

	while(cin>>n)
	{
		for(i=1;i<=n;i++)
		{
			cin>>z>>u>>t;
			if(z+u==t)
				cout<<"+"<<endl;
			else
				if(z-u==t)
					cout<<"-"<<endl;
				else
				if(z*u==t)
					cout<<"*"<<endl;
					else
					if(z/u==t)
						cout<<"\\"<<endl;
		}
	}
}

