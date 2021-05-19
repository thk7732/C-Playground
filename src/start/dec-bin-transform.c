#include <stdio.h>
#include <limits.h>

#define MAX_CHAR 30
double pow_int_exp(double base, int exp);
void not_initialized();


int main(){
not_initialized();
//printf("\n\n Result: %f", pow(16, 3));
}

void not_initialized(){


char input[MAX_CHAR]={0};
int count= 0;
double output = 0;
int dec = 0;
printf("Please enter Hex number\n");
while(count!=MAX_CHAR-1 && scanf("%c",&input[count]) &&input[count] != '\n'  )
{
	count++;
}
int i = 0; //counter for exponent
count -=1; // since array starts with 0
while(0 <= count){
	if(input[count] >= '0' && input[count] <= '9'){
		dec = input[count]-'0'; 
	} else if (input[count] >= 'A' && input[count] <= 'F'){
		dec = input[count] - 'A' + 10;
	} else if (input[count] >= 'a' && input[count] <= 'f'){
		dec = input[count] - 'a' + 10;
	}else{
		printf("Not a Hex number");
		break;
	}
printf("Output: %f, Input: %d, pow: %f  count = %d", output, dec,  pow_int_exp(16,count), count);
output +=  dec * pow_int_exp(16, i);
count -= 1;
i ++;
}
printf("\n\n\n");
printf("Result %f", output);

}

double pow_int_exp(double base, int  exp){ //power of two
	double pow_value = 1;
	if(exp == 0){
		return 1;
		}
	if(exp > 0){
		while(exp > 0){
			pow_value  = pow_value * base;
			exp = exp-1;
//			printf("Exp: %d\nPot_value: %f\n", exp, pow_value); 
		}
		return pow_value;
		}
	else{
		while(exp < 0){
			pow_value = pow_value * base;
			exp = exp + 1;
		//	printf("Exp: %d\nPot_value: %f\n", exp, pow_value); 
			}	
		return 1/pow_value;
		}
}

