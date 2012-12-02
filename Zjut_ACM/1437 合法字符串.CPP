#include <iostream>
#include <cmath>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
string s;
void comb_back( int m, int r )
{
	int*a=new int[r];
	int i,j,k=0;
	i=0,a[i]=0;
	do
	{
		if( a[i]-i<m-r+1 )
		{
			if( i==r-1 )
			{
				int count1=0,count2=0;
				for( j=0; j<r; j++ )
				{
					if( s[a[j]]=='a' || s[a[j]]=='e' || s[a[j]]=='i' || s[a[j]]=='o' || s[a[j]]=='u' )
						count1++;
					else
						count2++;
				}
				if( count1>=1 && count2>=2 )
				{
					for( j=0; j<r; j++)
						cout<<s[a[j]];
					cout<<endl;
				}
				a[i]++;
				continue;
			}
			i++;
			a[i]=a[i-1]+1;
		}		
		else
		{
			if( i==0 )
				return;
			a[--i]++;
		}
	}while(1);
}	
int main()
{
	int n,m;
	while( cin>>n>>m )
	{
		
		int i;
		char c;
		s="";
		for( i=0; i<m; i++ )
		{
			cin>>c;
			s+=c;
		}
		sort(s.begin(),s.end() );
		comb_back( m,n );
		//cout<<s<<endl;
	}
	return 0;
}
/*
4 6
a t c i s w
*/