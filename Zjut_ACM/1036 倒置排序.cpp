#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;
struct ko{
	char s1[20];
	char s2[20];
};
bool cmp( struct ko a, struct ko b )
{
	return atoi(a.s2)<atoi(b.s2);
}
int main()
{
	int n,m;
	struct ko x[100]/*, hold*/;
	int i,j,k;
	for( cin>>n; n>0; n-- )
	{
		k=0;
		for( cin>>m; m>0; m-- )
		{
			cin>>x[k].s1;
			for( j=i=strlen(x[k].s1)-1; i>=0; i-- )
				x[k].s2[j-i]=x[k].s1[i];
			x[k].s2[j+1]='\0';
			k++;
		}
		sort( x,x+k,cmp);
		for( i=0; i<k; i++ )
		{
			if( i==k-1 )
				cout<<x[i].s1<<endl;
			else
				cout<<x[i].s1<<" ";
		}
	}
	return 0;
}