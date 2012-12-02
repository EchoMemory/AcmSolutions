#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp( int a,int b)
{
	return a>b;
}
int main()
{
	int m,n,k;
	for( cin>>n; n>0; n-- )
	{
		vector<int> v;
		int sum=0;
		for( cin>>m; m>0; m-- )
		{
			cin>>k;
			v.push_back(k);
		}
		sort(v.begin(),v.end() ,cmp);
		for( int i=0; i<10; i++ )
			sum+=v[i];
		cout<<sum<<endl;
		v.clear();
	}
	return 0;
}
