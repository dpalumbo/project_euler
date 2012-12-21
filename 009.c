#include <stdio.h>

int main(void)
{
	int a,b,c,result;
	for(a=1;a<334;a++)
	{
		for(b=a;b<500;b++)
		{
			for(c=b;c<1000;c++)
			{
				if ((a+b+c)==1000 && (a*a + b*b == c*c))
				{
					result = a * b * c;
					printf("%d\n", result);
					return result;
				}

			}

		}

	}

	return 0;
}