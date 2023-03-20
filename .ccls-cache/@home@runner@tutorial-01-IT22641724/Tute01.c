/*Exercise 1 - Calculations

Write C program to input marks of two subjects.Calculate and print the average of the two marks.*/

//average of two numbers
#include <stdio.h>

int main(void)
{
  int marks1,marks2;
  float average;
  printf("Enter marks for 1st subject:");
  scanf("%d",&marks1);
  printf("Enter marks for 2nd subject:");
  scanf("%d",&marks2);
  average=(float)(marks1+marks2)/2;
  printf("The average marks are:%.2f",average);
  return 0;
}



