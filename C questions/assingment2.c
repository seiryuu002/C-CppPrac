#include<stdio.h>
void distance_calculator() //a function for calculating distance
{int time1=5,time2=8,time3=12; // given times
 int distance=0; //initializing distance value
 int speed = 60;
 printf("Distance travelled by car in %d hours is ",time1);
 distance = speed*time1; //to calculate distance travelled in 5 hours
 printf("%d miles\n",distance);
 printf("Distance travelled by car in %d hours is ",time2);
 distance = speed*time2; //to calculate distance travelled in 8 hours
 printf("%d miles\n",distance);
 printf("Distance travelled by car in %d hours is ",time3);
 distance = speed*time3; //to calculate distance travelled in 12 hours
 printf("%d miles\n",distance);
 }
void main(){
  distance_calculator(); //calling above function
}
