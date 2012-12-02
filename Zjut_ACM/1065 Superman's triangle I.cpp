#include <iostream>
#include <queue>
using namespace std;
int main()
{
	int n;
	while( cin>>n && n )
	{
		priority_queue <int> pq;
		int i,k,a,b,c;
		for( i=0; i<n; i++ )
		{
			cin>>k;
			pq.push(-k);
		}
		while( pq.size() != 3 )
		{
			a=pq.top();pq.pop();
			b=pq.top();pq.pop();
			pq.push(a+b);
		}
		a=pq.top();pq.pop();
		b=pq.top();pq.pop();
		c=pq.top();
		a=-a,b=-b,c=-c;
		if( a+b>c )
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}