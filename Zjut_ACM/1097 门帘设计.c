#include <iostream>
using namespace std;
void main()
{
	char c;
	int a,b;
	int i,j,k;
	while(cin>>c>>a>>b)
	{
		for(j=1;j<=b;j++)
		{
			for(k=1;k<=14;k++)
					cout<<c<<" ";
			cout<<c<<endl;
		}
		for(k=1;k<=a-b;k++)
		{
			for(i=1;i<=7;i++)
				cout<<c<<"   ";
			cout<<c<<endl;
		}
		cout<<endl;
	}
}