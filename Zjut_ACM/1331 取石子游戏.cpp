#include <iostream>
using namespace std;
int main()
{
	int m;
	while(cin>>m&&m!=0)
	{
		if(m%2==0)
			cout<<"No"<<endl;
		else
			cout<<"Yes"<<endl;
	}
	return 0;
}