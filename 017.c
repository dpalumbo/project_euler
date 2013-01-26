#include <stdio.h>

int main()
{
	int total = 0, i = 0;
	//Allocating more memory than necessary, just for clarity
	int map[1001];
	//consider 0 to have no letters
	map[0] = 0;
	//word counts
	map[1] = 3; 
	map[2] = 3;
	map[3] = 5;
	map[4] = 4;
	map[5] = 4;
	map[6] = 3;
	map[7] = 5;
	map[8] = 5;
	map[9] = 4;
	map[10] = 3;
	map[11] = 6;
	map[12] = 6;
	map[13] = 8;
	map[14] = 8;
	map[15] = 7;
	map[16] = 7;
	map[17] = 9;
	map[18] = 8;
	map[19] = 8;
	map[20] = 6;
	map[30] = 6;
	map[40] = 5;
	map[50] = 5;
	map[60] = 5;
	map[70] = 7;
	map[80] = 6;
	map[90] = 6;
	map[100] = 7;
	map[1000] = 8;

	for(i=1;i<=1000;i++)
	{
		//tens and ones place
		if(i%100<20 && i%100>0)
		{
			total += map[i%100];
		}
		else if (i%100 != 0)
		{
			total+=map[(i%100)/10 * 10]  + map[i%10];
		}
		//hundreds place
		if((i%1000)/100 > 0)
		{
			total+= map[(i%1000)/100] + map[100];
			if(i%100!=0 && i>99)
			{
				// + 3 for "and"
				total += 3;
			}
		}
		//thousands place
		if((i%10000)/1000 > 0)
		{
			total += map[(i%10000)/1000] + map[1000];
		}
	}

	printf("%d\n",total);

	return 0;
}