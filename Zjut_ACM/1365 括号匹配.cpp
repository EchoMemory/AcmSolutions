#include <iostream>
using namespace std;
int main()
{
	int n,res[1001];
	res[0]=1,res[1]=1;
	for( int i=2; i<1001; i++ )
	{
		res[i]=res[i-1];
		for( int j=0; j<i-1; j++ )
		{
			res[i]+=res[j]*res[i-j-2]%10000;
			res[i]%=10000;
		}
	}
	while( cin>>n && n!=EOF )
		cout<<res[n]<<endl;
	return 0;
}