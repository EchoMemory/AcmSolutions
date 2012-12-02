#include <iostream>
using namespace std;
void main()
{
	int n;
	int i=0;

	for(n=0;n<=99;n++)
	{
		if((n*100+10047)%57==0||(n*100+10047)%67==0)
		{
			cout<<(n*100+10047)<<endl;
			i++;
		}
	}
	cout<<i<<endl;
}
