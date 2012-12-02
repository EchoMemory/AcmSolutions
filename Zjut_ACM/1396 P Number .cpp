#include <iostream>
#include <map>
using namespace std;
int main()
{
	int n,m;
	while( cin>>n && n )
	{
		int i;
		map<int,int> mp;
		map<int,int>::iterator it;
		for( i=0; i<n; i++ )
		{
			cin>>m;
			mp[m]++;
		}
		for( it=mp.begin(); it!=mp.end(); it++ )
			if( it->second%2==1 )
			{
				cout<<it->first<<endl;
				break;
			}
		mp.clear();
	}
	return 0;
}