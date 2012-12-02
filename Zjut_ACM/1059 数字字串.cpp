#include <iostream>
#include <ctype.h>
using namespace std;
void main()
{
	char s[100];
	int i;
	while(cin>>s)
	{
		i=0;
		while(s[i]!='\0')
		{
			if(isdigit(s[i]))
				i++;
			else
				break;
		}
		if(s[i]=='\0')
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
}
