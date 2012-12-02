#include <iostream>
#include <set>
using namespace std;
int main()
{
	int n,m;
	while( cin>>n>>m )
	{
		set<int> st;
		int i,k,x,count=0;
		for( i=0; i<n; i++ )
		{
			scanf("%d",&k);
			st.insert(k);
		}
		for( i=0; i<m; i++ )
		{
			scanf("%d",&k);
			
			if( st.find(k)==st.end() )
				count++;
		}
		cout<<count<<endl;
	}
	return 0;
}