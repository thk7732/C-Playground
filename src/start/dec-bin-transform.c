#include <stdio.h>
#include <limits.h>

#define MAX_CHAR 30
double pot(double base, int exp);
void not_initialized();


int main(){
not_initialized();
//printf("Result: %f", pot(2, 8));
}

void not_initialized(){


char input[MAX_CHAR]={0};
int count= 0;
int output = 0;
int dec = 0;
while(count!=MAX_CHAR-1 && scanf("%c",&input[count]) &&input[count] != '\n'  )
{
	count++;
}
int i = 0;
while(i < count){
	if(input[i] >= '0' && input[i] <= '9'){
		dec = input[i]-'0'; 
	} else if (input[i] >= 'A' && input[i] <= 'F'){
		dec = input[i] - 'A' + 10;
	} else if (input[i] >= 'a' && input[i] <= 'f'){
		dec = input[i] - 'a' + 10;
	}

printf("Output: %d, Input: %d, pot: %d \n i = %d", output, dec,(int)  pot(16,i), i);
output +=  dec *(int) pot(16,i);
printf("Array: %c\n", input[i]);
i += 1;
}
printf("\n");
printf("%d", output);

}

double pot(double base, int  exp){ //power of two
	double pot_value = 1;
	if(exp == 0){
		return 1;
		}
	if(exp > 0){
		while(exp > 0){
			pot_value  = pot_value * base;
			exp = exp-1;
			//printf("Exp: %d\nPot_value: %f\n", exp, pot_value); 
			}
		return pot_value;
		}
	else{
		while(exp < 0){
			pot_value = pot_value * base;
			exp = exp + 1;
		//	printf("Exp: %d\nPot_value: %f\n", exp, pot_value); 
			}	
		return 1/pot_value;
		}
}

