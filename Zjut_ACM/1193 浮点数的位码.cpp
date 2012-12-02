#include <iostream>
using namespace std;

int main()
{
	int g=0;
	for(long double d;cin>>d;)
	{
		if(g++)
			cout<<endl;
		char* p=(char*)&d;
		for(int i=9;i>=0;i--)
		{
			for(int j=7;j>=0;j--)
				cout<<(*(p+i)>>j&1);
			cout<<(i%5==0?"\n":",");
		}
	}
	return 0;
}