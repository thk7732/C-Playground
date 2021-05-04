#include<stdio.h>

int main()
{
	printf("Hello World!\n");
	printf("Euklid!\n");

	int x = 12;
	int y= 48;
	printf("X = %d\n", x);
	printf("Y = %d\n", y);	
	while(x != y)
	{
		if(x > y){
		x = x - y;

		} else{ 
		y = y - x;
		}
	}

	printf("GGT = %d\n", x);

	return 0;
}
