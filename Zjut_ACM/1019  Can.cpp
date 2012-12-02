#include <iostream>
#include <queue>
using namespace std;
int main()
{
	int n,m,a,b,c,d,e,add;
	int k,sum;
	for( cin>>n; n>0; n-- )
	{
		priority_queue<int> pq;
		sum=0;
		for( cin>>m; m>0; m-- )
		{
			cin>>k;
			sum+=k;
			pq.push(k);
		}
		cin>>a>>b>>c>>d>>e;
		add=e-d;
		if( sum < add )//总的能增加的能量与需要增加的能量比
			cout<<"Tyr is not so great!"<<endl;
		else
		{
			int flag=0;
			while( c>0 )
			{
				k=pq.top();
				pq.pop();
				add-=k,c=c-a-b;
				if( add<=0 && c>=0 )
				{
					cout<<"Tyr is great!"<<endl;
					flag=1;
					break;
				}
			}
			if( !flag )
				cout<<"Tyr is not so great!"<<endl;
		}
	}
	return 0;
}