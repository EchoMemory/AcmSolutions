#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int tot,n;
	vector<int> v;
	int i,k,count;
	while( cin>>tot>>n )
	{
		count=0;
		for( ; n>0; n-- )
		{
			cin>>k;
			v.push_back(k);
		}
		sort( v.begin(),v.end() );
		for( i=0; tot>0 && i<v.size(); i++ )
			if( tot>=v[i] )
			{
				tot-=v[i];
				count++;
			}
		cout<<count<<endl;
		v.clear();
	}
	return 0;
}