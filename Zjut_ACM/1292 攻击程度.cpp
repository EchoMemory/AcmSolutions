#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef struct{
	string name;
	double a,b,c,sum;
}OK;
bool cmp( OK p, OK q )
{
	if( p.sum==q.sum )
		return p.name>q.name;
	return p.sum>q.sum;
}
int main()
{
	int n,g=0;
	while( cin>>n && n )
	{
		if( g++ )
			cout<<endl;
		int i;
		vector<OK> v;
		OK temp;
		for( i=0; i<n; i++ )
		{
			cin>>temp.name>>temp.a>>temp.b>>temp.c;
			temp.sum=temp.a*temp.b*(1+temp.c)*60.0;
			v.push_back(temp);
		}
		sort(v.begin(),v.end(),cmp);
		for( i=0; i<v.size(); i++ )
		{
			cout<<v[i].name<<' ';
			printf("%.1lf\n",v[i].sum);
		}
	}
}