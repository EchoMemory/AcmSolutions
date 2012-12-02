#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
typedef struct{
	string s;
	int counter;
}ok;
bool cmp( ok a, ok b )
{
	if( a.s.size()==b.s.size() )
		if( a.counter==b.counter )
			return a.s<b.s;
		else
			return a.counter<b.counter;
	else
		return a.s.size()<b.s.size();
}
int main()
{
	ok temp;
	int i;
	vector<ok> v;
	while( cin>>temp.s )
	{
		temp.counter=0;
		for( i=0; i<temp.s.size(); i++ )
			if( temp.s[i]=='1' )
				temp.counter++;
		v.push_back(temp);
	}
	sort( v.begin(), v.end(),cmp);
	for( i=0; i<v.size(); i++ )
		cout<<v[i].s<<endl;
	return 0;
}