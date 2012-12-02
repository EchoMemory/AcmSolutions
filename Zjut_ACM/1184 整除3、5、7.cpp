#include <iostream>
using namespace std;
void main()
{
	unsigned a[50];
	int n=0;
	int i;
	int flag;

	while( cin>>a[n] )
		n++;
	for( i=0; i<n; i++ )
	{
		flag=0;
		cout<<a[i]<<"-->";
		if( a[i]%3==0 )
		{
			cout<<"3";
			a[i]/=3;
			flag=1;
		}
		if( a[i]%5==0 )
		{
			if( flag==1 )
			{
				cout<<",5";
				a[i]/=5;
				flag=2;
			}
			else
			{
				cout<<"5";
				a[i]/=5;
				flag=1;
			}
		}

		if( a[i]%7==0 )
		{
			if( flag==1 || flag==2 )
				cout<<",7";
			else
			{
				cout<<"7";
				flag=1;
			}
		}
		if( flag==0 )
			cout<<"None";
		cout<<endl;
	}
}





