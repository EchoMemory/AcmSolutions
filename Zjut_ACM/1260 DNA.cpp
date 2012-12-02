#include <iostream>
using namespace std;
int main()
{
	int t;
	for( cin>>t; t>0; t-- )
	{
		int a,b,i,j,k;
		cin>>a>>b;
		for( i=0; i<a/2; i++ )
		{
			for( j=0; j<i; j++ )
				cout<<" ";
			cout<<"X";
			for( j=0; j<2*(a/2-i)-1; j++ )
				cout<<" ";
			cout<<"X"<<endl;
		}
		for( j=0; j<a/2; j++ )
			cout<<" ";
		cout<<"X"<<endl;

		for( i=1; i<=a/2; i++ )
		{
			for( j=0; j<a/2-i; j++ )
				cout<<" ";
			cout<<"X";
			for( j=0; j<2*i-1; j++ )
				cout<<" ";
			cout<<"X"<<endl;
		}

		for( k=0; k<b-1; k++ )
		{
			for( i=0; i<a/2-1; i++ )
			{
				for( j=0; j<i+1; j++ )
					cout<<" ";
				cout<<"X";
				for( j=0; j<2*(a/2-i-1)-1; j++ )
					cout<<" ";
				cout<<"X"<<endl;
			}
			for( j=0; j<a/2; j++ )
				cout<<" ";
			cout<<"X"<<endl;

			for( i=1; i<=a/2; i++ )
			{
				for( j=0; j<a/2-i; j++ )
					cout<<" ";
				cout<<"X";
				for( j=0; j<2*i-1; j++ )
					cout<<" ";
				cout<<"X"<<endl;
			}
		}
		cout<<endl;
	}
	return 0;
}
