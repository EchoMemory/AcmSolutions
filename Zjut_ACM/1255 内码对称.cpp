#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	unsigned n;
	int count=0;
	while( cin>>n )
	{
		bitset<32> b(n);
		string t,s=b.to_string();
		t=s;
		reverse( s.begin(),s.end() );
		if( s==t )
			count++;
	}
	cout<<count<<endl;
	return 0;
}