#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int n,m,k;
	vector<int> a;
	int i,j;

	for( cin>>n; n>0; n-- )
	{
		cin>>m;
		for( i=0; i<m; i++ )
		{
			cin>>k;
			a.push_back(k);
		}
		sort( a.begin(), a.end() );
		for( j=0; j<a.size(); j++ )
		{
			if( j==a.size()-1 )
				cout<<a[j]<<endl;
			else
				cout<<a[j]<<" ";
		}
		a.clear();
	}
	return 0;
}