#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef struct{
	string name,place;
	int num;
}Fruit;
bool cmp( Fruit a, Fruit b )
{
	if( a.place==b.place )
		return a.name<b.name;
	else
		return a.place<b.place;
}
int main()
{
	int t,g=0;
	for( cin>>t; t>0; t-- )
	{
		if( g++ )
			cout<<endl;
		int i,j,k;
		int m,flag;
		Fruit temp;
		vector<Fruit> v;
		cin>>m;
		for( i=0; i<m; i++ )
		{
			flag=0;
			cin>>temp.name>>temp.place>>temp.num;
			for( j=0; j<v.size(); j++ )
				if( v[j].name==temp.name && v[j].place==temp.place )
				{
					v[j].num+=temp.num;
					flag=1;
					break;
				}
			if( !flag )
				v.push_back(temp);
		}
		sort( v.begin(), v.end(),cmp );
		k=0;
		for( i=0; i<v.size()-1; i++ )
		{
			if( v[i].place!=v[i+1].place )
			{
				cout<<v[i].place<<endl;
				for( ; k<=i; k++ )
					cout<<"   |----"<<v[k].name<<"("<<v[k].num<<")"<<endl;
				k=i+1;
			}
		}
		if( v[i].place!=v[i-1].place )
			cout<<v[i].place<<endl
				<<"   |----"<<v[i].name<<"("<<v[i].num<<")"<<endl;
		else
		{
			cout<<v[i].place<<endl;
			for( ; k<=i; k++ )
				cout<<"   |----"<<v[k].name<<"("<<v[k].num<<")"<<endl;
		}

		v.clear();
	}
	return 0;
}