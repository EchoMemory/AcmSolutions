#include <stdio.h>
int main()
{
	int a,b,c;
	for(a=0;a<=100/3;a++)
	{
		for(b=0;b<=(100-a)/2;b++)
		{
			for(c=0;c<=(100-3*a-2*b);c++)
			{
				if(a+b+3*c==100&&a*3+b*2+c==100)
                   printf("%d %d %d\n",a,b,c*3);
			}
		}
	}
	return 0;
}