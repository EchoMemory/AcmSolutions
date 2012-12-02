#include <iostream>
#include <map>
using namespace std;
int main()
{
	char s[101];
	int i,j;
	int max,flag;
	while( cin>>s )
	{
		flag=0;
		map<char,int> ch;
		map<char,int>::iterator it;
		for( i=0; s[i]!='\0'; i++ )
			ch[ s[i] ]++;
		max=0;
		for( it=ch.begin(); it!=ch.end(); it++ )
			if( it->second > max )
				max=it->second;
		for( i=0; s[i]!='\0'; i++ )
			if( ch[ s[i] ]!=max )
			{
				cout<<s[i];
				flag=1;
			}
		if( flag==0 )
			cout<<"NULL";
		cout<<endl;
	}
	return 0;
}