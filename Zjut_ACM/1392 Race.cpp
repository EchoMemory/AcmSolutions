#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef struct{
	int x,v;
}OK;
bool cmp( OK a, OK b )
{
	return a.x<b.x;
}
int main()
{
	OK temp;
	vector<OK> vec;
	int n;
	int count=0;
	int i,j;
	for( cin>>n; n>0; n-- )
	{		
		cin>>temp.x>>temp.v;
		vec.push_back(temp);
	}
	sort( vec.begin(), vec.end(), cmp );
	for( i=0; i<vec.size()-1; i++ )
		for( j=i+1; j<vec.size(); j++ )
			if( vec[i].v>vec[j].v )
				count++;
	cout<<count<<endl;
	return 0;
}