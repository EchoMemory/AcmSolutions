#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n,m;
	vector<int> t;
	int i,k,j,count;

	while( cin>>n>>m )
	{
		count=0;
		for( ; m>0; m-- )
		{
			cin>>k;
			t.push_back(k);
		}
		sort( t.begin(), t.end() );
		for( i=1; count<n; i++ )
		{
			for( j=0; j<t.size(); j++ )
				if( i%t[j]==0 )
					count++;
		}
		cout<<i-1<<endl;
		t.clear();
	}
	return 0;
}