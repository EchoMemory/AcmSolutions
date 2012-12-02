#include <iostream>
using namespace std;
int main()
{
	char s[101];
	int i;
	int result;
	while( cin>>s )
	{
		result=0;
		for( i=0;s[i]!='\0'; i++ )
			result+=s[i]-'0';
		cout<<result<<endl;
	}
	return 0;
}