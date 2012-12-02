#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	string s;
	getline( cin,s );
	while( t-- )
	{
		getline(cin,s);
		reverse( s.begin(), s.end() );
		cout<<s<<endl;
	}
	return 0;
}
