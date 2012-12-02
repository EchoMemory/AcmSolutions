#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	for( cin>>t; t>0; t-- )
	{
		set<double> set;
		int n,x,y;
		cin>>n;
		int i;
		for( i=0; i<n; i++ )
		{
			scanf("%d%d",&x,&y);
			set.insert(y*1.0/x);
		}
		cout<<set.size()<<endl;
			
		set.clear();
	}

	return 0;
}