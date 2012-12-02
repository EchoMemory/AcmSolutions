#include <iostream>
using namespace std;
void main()
{
	int n;
	int i;
	int a,b;
	while(cin>>n)
	{
		for(i=0;i<n;i++)
		{
			cin>>a>>b;
			if(a<b)
				cout<<"Smaller"<<endl;
			if(a==b)
				cout<<"Equal"<<endl;
			if(a>b)
				cout<<"Bigger"<<endl;
		}
	}
}