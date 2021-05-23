#include <stdio.h>
#include <limits.h>

#define MAX_CHAR 30
double pow_int_exp(double base, int exp);
void transform_hex_to_dec();




int main(){

transform_hex_to_dec();

}

void transform_hex_to_dec(){
	
	char input[MAX_CHAR]={0};
	int count= 0;
	double output = 0;
	int dec = 0;
	printf("Please enter Hex number\n");
	while(count < MAX_CHAR && scanf("%c",&input[count]) && input[count] != '\n'){
	count++;
	}
	int i = 0; //counter for exponent
	printf("Wahrschl n: %d\n", input[count]);
	count -= 1; // since the last character is '\n'
	while(count >= 0){	
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
		printf("Count: %d\n", count);
		printf("Dec: %d   Expo: %d   Pow: %f\n", dec, i, pow_int_exp(16, i));
		output +=  dec * pow_int_exp(16, i); //instead of pow "base*=16;" could also be used
		count -= 1;
		i =i + 1;
	}
	printf("\n\n\n");
	printf("Result %f", output);

}

double pow_int_exp(double base, int  exp){ //power function with only int exp
	double pow_value = 1;
	if(exp == 0){
		return 1;
		}
	if(exp > 0){
		while(exp > 0){
			pow_value  = pow_value * base;
			exp = exp-1;
		}
		return pow_value;
		}
	else{
		while(exp < 0){
			pow_value = pow_value * base;
			exp = exp + 1;
			}	
		return 1/pow_value;
		}
}

