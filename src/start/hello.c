#include<stdio.h>

void euklid();
void interest();
void square(int a, int b);
int main()
{
//interest();	
//euklid();
//square(20, 36)

char string[30];	
scanf("%s", string);
int i = 0;
//int tab_number;
//tab_number = getchar();

//printf("%d", tab_number);

for(i;i<30; i= i+1)
{
	if(string[i] == 92)
	{
		printf("Success");
		break;
	}
}
printf("%c", string[i]);

printf("%s", string);
return 0;
}

void euklid(){
	printf("Hello World!\n");
	printf("Euklid!\n");
	
	int x;
	int y;
	printf("X= ");
	scanf("%d", &x);
	printf("Y= ");
	scanf("%d", &y);
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

}

void square(int start, int end){

for(start; start<=end; start = start+1){

printf("Zahl: %d  Quadrat: %d\n", start, start*start);

}

}
void interest(){
#define time  10
#define seed_capital 1000.0
#define interest_rate 0.05

double end_money = seed_capital;
int i = 0;
for(i; i<time; i = i+1)
{
end_money = (end_money * interest_rate) + end_money;
printf("Jahr: %d. Money: %f\n ", i+1, end_money);
	
}
}
