#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* f = fopen("013.txt", "r");
    char n[51];
    unsigned long sum=0;

    //just sum the first 11 digits of each number
    while(fscanf(f, "%s", n) > 0) 
    {
       n[11] = 0;
	   sum+=atol(n);
    }

    fclose(f);	
    printf("%lu\n",sum);

	return 0;
}