#include <stdio.h>

void main()
{
   int num, temp, rem, sum = 0;
   printf("Enter a number: ");
   scanf("%d", &num);
   temp = num;
////////////////////////////// 0.123            3
   int n = 0;
   while (temp != 0)
   {
      n++;
      temp = temp / 10;
   }
   temp = num;
//////////////////////////////
   while (temp != 0)
   {
      rem = temp % 10;
/////////////////////////
      int pow = 1;
      for (int i = 0; i < n; i++)
      {
         pow = pow * rem;
      }
////////////////////////
      sum = sum + pow;
      temp = temp / 10;
   }
   if (sum == num)
   {
      printf("%d is an armstrong number", num);
   }
   else
   {
      printf("%d is not an armstrong number", num);
   }
}