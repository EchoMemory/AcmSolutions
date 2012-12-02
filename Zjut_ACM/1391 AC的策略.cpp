#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n,m;
	while( cin>>n>>m )
	{
		vector<int> vec;
		int i,k;
		int count=0,sum=0;
		for( i=0; i<n; i++ )
		{
			cin>>k;
			vec.push_back(k);
		}
		sort( vec.begin(), vec.end() );
		for( i=0; i<vec.size(); i++ )
		{
			if( vec[i]<=m )
			{
				m-=vec[i];
				count++;
			}
			else
				break;
		}
		for( i=0; i<count; i++ )
			sum+=(count-i)*vec[i];
		cout<<count<<" "<<sum<<endl;
		vec.clear();
	}
	return 0;
}
