#include <iostream>
using namespace std;
void main()
{
	char c;
	int m,n;
	int j,k;

	while(cin>>c>>m>>n&&m!=0&&n!=0)
	{
			for(k=1;k<=m;k++)
			{
				cout<<"B";
				for(j=1;j<=m;j++)
					cout<<" ";
				for(j=1;j<=n;j++)
					cout<<c;
				cout<<endl;
			}
			for(k=1;k<=n;k++)
			{
				cout<<"B";
				for(j=1;j<=m;j++)
					cout<<c;
				for(j=1;j<=n;j++)
					cout<<" ";
				for(j=1;j<=m;j++)
					cout<<c;
				cout<<endl;
			}
			for(k=1;k<=m;k++)
			{
				cout<<"B";
				for(j=1;j<=m;j++)
					cout<<" ";
				for(j=1;j<=n;j++)
					cout<<c;
				cout<<endl;
			}
		cout<<endl;
	}
}
		