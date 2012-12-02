#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	for( cin>>n; n>0; n-- )
	{
		string s;
		cin>>s;
		int max=-1000000,temp=0;
		for( int i=0; i<s.size(); i++ )
		{
			temp+=s[i]-'A'-13;
			if( temp>max )
				max=temp;
			if( temp<0 )
				temp=0;
		}
		cout<<max<<endl;
	}
	return 0;
}