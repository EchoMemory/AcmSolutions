#include <iostream>
#include <algorithm>
using namespace std;
int f[11],record;
bool knap(int s, int n )
{
	if( s==0 )
		return true;
	if( s<0 || n<1 )
		return false;
	if( knap(s-f[n],n-1) )
	{
		record++;
		return true;
	}
	return knap(s,n-1);
}
int main()
{
	int n,m;
	while( cin>>n )
	{
		record = 0;
		for( int i=1; i<=n; i++ )
			cin>>f[i];
		sort(f+1,f+n+1);
		cin>>m;
		knap(m,n);
		if( record )
			cout<<record<<endl;
		else
			cout<<-1<<endl;

	}
	return 0;
}