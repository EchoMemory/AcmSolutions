#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string a,b,s1,s2;
	while( cin>>a>>b )
	{
		int flag=0;
		int temp,i;
		char hold;
		for( temp=0; temp<a.size(); temp++ )
		{
			for( i=0; i<a.size(); i++ )
				if( a[i]!=b[i] )
					break;
			if( i==a.size() )
			{
				flag=1;
				break;
			}
			s1=b.substr( b.size()-1,1 );
			s2=b.substr(0,b.size()-1);
			b=s1+s2;
		}
		
		if( flag )
		{
			cout<<"Yes"<<endl;
			continue;
		}
		else 
		{
			for( i=0; i<a.size()/2; i++ )
			{
				hold=a[i];				
				a[i]=a[a.size()-i-1];
				a[a.size()-i-1]=hold;
			}
			for( temp=0; temp<a.size(); temp++ )
			{
				for( i=0; i<a.size(); i++ )
					if( a[i]!=b[i] )
						break;
				if( i==a.size() )
				{
					flag=1;
					break;
				}
				s1=b.substr( b.size()-1,1 );
				s2=b.substr(0,b.size()-1);
				b=s1+s2;
			}
		}
		if( flag )
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}