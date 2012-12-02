#include <iostream>
#include <string>
using namespace std;
int main()
{
	int t;	
	for( cin>>t; t>0; t-- )
	{	
		int k=0;
		int flag;
		string s,hold;
		int begin=0;
		while( getline(cin,s) && s!="#End" )
		{		
			hold+=s;
			if( s=="#Doc" )
				begin=1;
			if( begin )
			{
				for( int i=0; i<s.size(); i++ )
				{
					s[i]=tolower(s[i]);
					if( s[i]>='a' && s[i]<='z' )
						hold[k++]=s[i];
				}
			}
		}
		flag=hold.find("animate");
		if( flag!=-1 )
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}
