#include<stdio.h>

int main(){
	int number;
	int digit;
	int result=1;
	
	
	printf("The number which you want to find the multiplication of the digits: ");
	scanf("%d",&number);
	
	if (number > 50000){
		printf("The number is larger than the code can calculate.\n");
		
	}
	else{
		while(number>0){
			digit=number%10;
			result=result*digit;
			number=number/10;
		}
		printf("The multiplication of the digits of the number: %d", result);
	}
	return 0;		
}
