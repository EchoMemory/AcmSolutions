#include <stdio.h>
#include <ctype.h>

void convertToUppercase( char *sPtr);

void main()
{
	char string[300];
	while(gets(string))
	{
		convertToUppercase( string );
		printf( "%s\n", string );
	}
}
void convertToUppercase( char *sPtr )
{
	while ( *sPtr != '\0' )
	{			
		if ( islower( *sPtr ) )
		{
			*sPtr = toupper( *sPtr );
		}else
			if ( isupper( *sPtr ) )
			{
			*sPtr = tolower( *sPtr );
			}
			++sPtr;
	}

}