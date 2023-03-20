/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  int dis,dis30_amount,extra_dis;
  float amount,extra_amount;
  printf("Input the distance in km:\n");
  scanf("%d",&dis); //read dis
  if(dis<=30) //check whether dis less than or equal to 30
  {
    amount=dis*50;
  }
  else{
    dis30_amount=30*50;
    extra_dis=dis-30;
    extra_amount=extra_dis*40;
    amount=dis30_amount+extra_amount;
  }
  printf("Amount=%.2f",amount);
  return 0;
}  //end of this function
