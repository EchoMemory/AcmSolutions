#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1,s2;
	while( cin>>s1 && s1!="#" )
	{
		cin>>s2;
		int i,j,count=0;
		for( i=0; i<s1.size(); i++ )
		{
			for( j=0; j<s2.size(); j++ )
				if( s2[j]!=s1[i+j] )
					break;
			if( j==s2.size() )
			{
				count++;
				i=i+j-1;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}