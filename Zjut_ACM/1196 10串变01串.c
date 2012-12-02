#include<stdio.h>
#include<stdlib.h>

void str2int( char *sptr);
int main()
{
	char string[200];
	while (scanf("%s", string)!=EOF){
	str2int(string);
	printf("%s\n",string);
	}
}

void str2int( char *sptr)
{
	while ( *sptr != '\0' )
	{			
		if ( *sptr =='0' )
		{
			*sptr = '1';
		}
		else
			if (*sptr =='1' )
			{
			*sptr ='0';
			}
			++sptr;
	}

}

	



