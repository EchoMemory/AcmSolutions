#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
bool cmp( int a, int b )
{
	return a>b;
}
int main()
{
	int i,score;
	string s;
	vector<int> a;
	while( getline(cin, s) )
	{
		score=0;
		for( i=0; s[i]!='\0'; i++ )
		{
			if( s[i]>='0' && s[i]<='9' )
				score=10*score+s[i]-'0';
			else
			{
				a.push_back(score);
				score=0;
			}
		}
		sort( a.begin(),a.end() );
		for( i=a.size()-1; i>=0; i-- )
		{
			if( a[i]>a[i-1] )
			{
				cout<<a[i-1]<<endl;
				break;
			}
		}
		a.clear();
	}
	return 0;
}