#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	while( getline( cin,s ) )
	{
		int a=0,b=0;
		int i;
		for( i=0; i<s.size(); i++ )
			if(s[i]=='a')
				a++;
			else b++;
		cout<<a<<" "<<b<<endl;
	}
	return 0;
}