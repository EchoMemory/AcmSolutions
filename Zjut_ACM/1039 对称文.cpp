#include<iostream>     
#include<string>
using namespace std;
int main()
{
	char string[100];
	int len,i,k;
	while( gets( string ) && strcmp( string, "000000" ) )
	{
		k=1;
		len=strlen( string )-1;
		for( i=0; i<=len; i++ )
			if( string[ i ] >= 'A' && string[ i ] <= 'Z' )
				string[ i ]=string[ i ] + 32;
		for( i=0; i<=len/2 && k; i++ )
		{
			if( string[ i ] == '(' )
				k=string[ len-i ] == ')';
			else if( string[ i ] == '[' )
				k=string[ len-i ] == ']'; 
			else if( string[ i ] == '<' )
			    k= string[ len-i ] == '>';
			else if( string[ i ] == '{' )
				k=string[ len-i ] == '}';
			else if( string[ i ] != string[ len-i ] )
				k=0;
		}
		if( k==1 )
			cout<<"Symmetry"<<endl;
		else
			cout<<"Not symmetry"<<endl;
	}
return 0;
}