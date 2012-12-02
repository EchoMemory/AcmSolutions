#include <iostream>
using namespace std;
void main()
{
	int n;
	int i,j,k;

	while(cin>>n&&n<=26)
	{
		for(i=1;i<=n;i++)
		{
			cout<<"a";
			for(j=n-i;j>0;j--)
				cout<<" ";
			for(k=0;k<i;k++)
				printf("%c",'a'+k);
			cout<<endl;
		}
		cout<<endl;
	}
}
				
			