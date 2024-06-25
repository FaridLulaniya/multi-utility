#include<stdio.h>
int main(){
	
	int c;
	printf("Enter The Value Of Celsius :- ");
	scanf("%d",&c);
	float sum = (c*9/5)+32;
	
	printf("F = %.2f",sum);
	
}