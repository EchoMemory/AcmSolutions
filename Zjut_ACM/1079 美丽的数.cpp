#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;
struct ko{
	char s[30];
	int num;
};
bool cmp( struct ko a, struct ko b )
{
	return  a.num> b.num;
}
int main()
{
	int n;
	struct ko x[100],hold;
	int i,j,k;

	while( cin>>n && n )
	{
		k=0;
		for( ; n>0; n-- )
		{
			cin>>x[k].s;
			x[k].num=0;
			for( i=0; x[k].s[i]!='\0'; i++ )
				if( x[k].s[i]=='2' || x[k].s[i]=='3'|| x[k].s[i]=='5' || x[k].s[i]=='7' )
					x[k].num++;
			k++;
		}
		sort( x, x+k,cmp );
		cout<<x[0].s<<endl;
	}
	return 0;
}
	