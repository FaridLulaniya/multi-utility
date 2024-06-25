#include<stdio.h>
int main(){
	
	int first_angle,second_angle;
	int Third_angle;
	
	printf("Enter your First Angle Value :- ");
	scanf("%d",&first_angle);
	
	printf("Enter your Second Angle Value :- ");
	scanf("%d",&second_angle);
	
	Third_angle=180-(first_angle+second_angle);
  
       printf("Your Third Angle :- %d",Third_angle);
}