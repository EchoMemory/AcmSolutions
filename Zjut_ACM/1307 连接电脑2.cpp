#include <iostream>
using namespace std;
int pre[1000];
int find(int x)
{
int r=x;
while (pre[r]!=r)
  r=pre[r];
int i=x;
int j;
while(i!=r)
{
  j=pre[i ];
  pre[i ]=r;
  i=j;
}
return r;
}

int main()
{
	int n,m,p1,p2,i,total,f1,f2;
	
	while( cin>>n>>m && m || n )
	{
		total=n-1;
		for(i=1;i<=n;i++)
		pre[i ]=i;
		for( ; m>0; m-- )
		{
			cin>>p1>>p2;
			if( p1!=0 && p2!=0 )
			{
				f1=find(p1);
				f2=find(p2);
				if(f1!=f2)
				{
					pre[f2]=f1;
					total--;
				}
			}
		}
		cout<<total<<endl;
	}
	return 0;
}