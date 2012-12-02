#include <iostream>
#include <vector>
#include <algorithm>
typedef struct{
	int a,b,c,d,sum;
}OK;
bool cmp( OK a, OK b )
{
	return a.sum<b.sum;
}
using namespace std;
int main()
{
	int n;
	while( cin>>n )
	{
		int i,j;
		int flag=0;
		vector<OK> v;
		OK temp,hold;
		cin>>temp.a>>temp.b>>temp.c>>temp.d>>temp.sum;
		for( i=0; i<n; i++ )
		{
			hold.sum=0;
			scanf( "%d%d%d%d",&hold.a,&hold.b,&hold.c,&hold.d);
			hold.sum+=hold.a;
			hold.sum+=hold.b;
			hold.sum+=hold.c;
			hold.sum+=hold.d;
			if( hold.a>=temp.a && hold.b>=temp.b &&  hold.c>=temp.c &&  
				hold.d>=temp.d &&  hold.sum>=temp.sum )
				v.push_back(hold);
			if( i==0 && v.size()==0 )
				flag=1;
		}
		if( flag==1 )
		{
			cout<<"tragedy!"<<endl;
			continue;
		}
		double dk=v[0].sum;
		sort( v.begin(),v.end(),cmp);
		for( j=0; j<v.size(); j++ )
			if( v[j].sum==dk )
			{
				cout<<v.size()-j<<endl;
				break;
			}
		v.clear();
	}
	return 0;
}