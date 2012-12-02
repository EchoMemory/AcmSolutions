#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	
	for( cin>>t; t>0; t-- )
	{
		string s;
		int flag=0;
		int a[26]={0};
		cin>>s;
		int i,j;
		char c;
		for( i=0; i<s.size(); i++ )
			a[s[i]-'A']++;
		for( i=0; i<26; i++)
		if( a[i]%2 )
		{ 
			flag++;
			c=(char)(i+'A');
			if( flag==2 )
				break;
		}
		if( i<26 )
		 cout<<"Sorry"<<endl;
		else
		{
			for(  i=0; i<26; i++)
				for( j=0; j<a[i]/2; j++)
				cout<<(char)(i+'A');
			if( flag==1 )
			 cout<<c;
			for( i=25; i>=0; i--)
			for( j=0; j<a[i]/2; j++)
			 cout<<(char)(i+'A');
			cout<<endl;
		}
	}
	return 0;
}
