#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool f( int a,int b )
{
	char s1[20],s2[20];
	int j=0,k=0;
	for( ; a>0; a/=10 )
		s1[j++]=a%10+'0';
	s1[j]='\0';
	for( ; b>0; b/=10 )
		s2[k++]=b%10+'0';
	s2[k]='\0';
	sort( s1,s1+j );
	sort( s2,s2+k );
	return !strcmp(s1,s2);
}
int main()
{
	int n;
	while( cin>>n && n )
	{
		int i,j,k,flag=0;
		vector<int> v;
		for( i=0; i<n; i++ )
		{
			cin>>k;
			v.push_back(k);
		}
		for( i=0; i<n-1; i++ )
		{
			for( j=i+1; j<n; j++ )
				if( f(v[i],v[j]) )
				{
					v[j]=0;
					flag=1;
				}
			if( flag==1 )
			{
				v[i]=0;
				flag=0;
			}
		}
		sort( v.begin(),v.end() );
		for( i=0; i<n; i++ )
			if( v[i]!=0 )
				break;
		if( i==v.size() )
			cout<<"None"<<endl;
		else
			for( ; i<v.size(); i++ )
			{
				if( i==v.size()-1 )
					cout<<v[i]<<endl;
				else
					cout<<v[i]<<" ";
			}
		v.clear();
	}
	return 0;
}
