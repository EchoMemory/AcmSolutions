#include <stdio.h>
int func(int n);
void main()
{
	int n;
    while(scanf("%d",&n)!=EOF)
	{
		if(n==1) printf("1\n");
		else
			if(n==4) printf("2\n");
			else
				printf("%d\n",func(n));
	}
}
int func(int n)
{
	if(n==2) return 1;
	if(n==3) return 1;
	if(n==4) return 2;
	else return func(n-1)+func(n-3);
}