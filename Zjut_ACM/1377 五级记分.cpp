#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	int g=0;
	while( cin>>n &&  n )
	{
		if( g++ )
			cout<<endl;
		vector<int> a,b,c,d,e;
		int i,m;
		for( i=0; i<n; i++ )
		{
			cin>>m;
			if( m<=100 && m>=90 )
				a.push_back(m);
			if( m<=89 && m>=80 )
				b.push_back(m);
			if( m<=79 && m>=70 )
				c.push_back(m);
			if( m<=69 && m>=60 )
				d.push_back(m);
			if( m<=59 && m>=0 )
				e.push_back(m);
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		sort(c.begin(),c.end());
		sort(d.begin(),d.end());
		sort(e.begin(),e.end());
		cout<<"A:";
		for( i=a.size()-1; i>=0; i-- )
			cout<<" "<<a[i];
		cout<<endl;
		cout<<"B:";
		for( i=b.size()-1; i>=0; i-- )
			cout<<" "<<b[i];
		cout<<endl;
		cout<<"C:";
		for( i=c.size()-1; i>=0; i-- )
			cout<<" "<<c[i];
		cout<<endl;
		cout<<"D:";
		for( i=d.size()-1; i>=0; i-- )
			cout<<" "<<d[i];
		cout<<endl;
		cout<<"E:";
		for( i=e.size()-1; i>=0; i-- )
			cout<<" "<<e[i];
		cout<<endl;
	}
	return 0;
}