#include <iostream>
#include <string>
using namespace std;

int main()
{	
	string a;
	int i,t;
	i=t=0;
	while(getline(cin,a))
	{
		i++;
		if(a=="Bye.")
		{
			cout <<"LC:See you."<<endl;
			break;
		}
		else if(a=="Hello.")
			cout <<"LC:Hello."<<endl;
		else if(a=="How are you?")
			cout <<"LC:I'm fine."<<endl;
		else if(a=="How old are you?")
			cout <<"LC:I'm "<<i<<"'s old."<<endl;
		else if(a=="What's your name?")
		{
			if(t==0)
				cout <<"LC:My name is LittleCpp."<<endl;
			else if(t==1)
				cout <<"LC:I think I had told you yet."<<endl;
			else cout <<"LC:Oh, you have a poor memory."<<endl;
			t++;
		}
		else cout <<"LC:Sorry, my father haven't taught me how to answer this question."<<endl;
	}
	return 0;
}