#include <stdio.h>

int main(void) {

 
  int num1;
  int num2; 
  int lowerBound;
  int upperBound;
  int gcd;
  int lcm;

  printf("Enter two numbers: ");
  scanf("%d %d",&num1,&num2);

  if (num1<num2)
  {
    lowerBound=num1;
    upperBound=num2;
  }
  else
  {
    lowerBound=num2;
    upperBound=num1;
  }
    
  for(int i=1;i<=lowerBound;i++)
      {
        if (num1%i==0 && num2%i==0)
        {
          gcd=i;
        }
      }

  printf("Greatest common divisor is %d.",gcd);

  for(int i=upperBound;i<=(num1*num2);i++)
    {
      if (i%num1==0 && i%num2==0)
      {
        lcm=i;
        printf("\nLeast common multiple is %d.",lcm);
        break;
      }
    }
  
  return 0;
}