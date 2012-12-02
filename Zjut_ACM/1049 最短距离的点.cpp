#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
typedef struct{
	int x,y;
	double d;
} distence;
bool cmp( distence a, distence b )
{
	return a.d<b.d;
}
int main()
{
	distence ko[100];
	int i,k=0;
	while( cin>>ko[k].x>>ko[k].y )
		k++;
	for( i=1; i<k; i++ )
		ko[i].d=sqrt( pow(ko[i].x-ko[0].x-0.0, 2.0) + 
						pow(ko[i].y-ko[0].y-0.0, 2.0) );
	sort( ko+1, ko+k, cmp );
	cout<<ko[1].x<<" "<<ko[1].y<<endl;
	return 0;
}
