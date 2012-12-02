#include <iostream>
using namespace std;
void main()
{
	char c;
	int n;
	int i,j,k;

	while(cin>>c>>n)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n-i;j++)
				cout<<" ";
			for(k=1;k<=2*i-1;k++)
				cout<<c;
			cout<<endl;
		}
	
	}
}
