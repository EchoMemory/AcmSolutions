#include<iostream>
#include<string>
using namespace std;
int main()
{
	char m;
	int a,b,c;
	int x=0,i,j;

	while(cin>>m>>a>>b>>c)
	{
		if(x++)
		cout<<endl;
		string y(a-1,m);
		string z(1,m);
		z=" "+z;
		string temp="";
		for(i=0;i<a/2;i++)
			temp+=z;
		cout<<m<<y<<endl;
		int p=0;
		for(i=0;i<c;i++)
		{
			for(j=1;j<b/2;j++)
			{
				cout<<string(j,' ')<<m;
				if(p%2)
				cout<<y;
				else 
					cout<<temp;
				cout<<endl;
				p++;
			}
			for(j=(b-1)/2;j>=0;j--)
			{
				cout<<string(j,' ')<<m;
				if(p%2)
				cout<<y;
				else
					cout<<temp;
				cout<<endl;
				p++;
			}
		}
	}
	return 0;
}
