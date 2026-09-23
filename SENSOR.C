#include<stdio.h>
void main(){
int sensor1,sensor2,sum =0;
 clrscr();
printf("Enter reading of sensor1 :");
scanf("%d" ,&sensor1);
printf("Enter reading of sensor2 :");
scanf("%d" ,&sensor2);

sum = sensor1 + sensor2;

printf("Sum of the reading = %d" ,sum);
getch();
}
