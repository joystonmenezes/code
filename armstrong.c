#include <stdio.h>
 
int main()
{
    int number, sum=0, rem=0,tempNumber;
 
    printf("Enter an integer number: ");
    scanf("%d", &number);
 
    tempNumber=number;
 
    while(tempNumber!=0)
    {
        rem=tempNumber%10;
        sum=sum + (rem*rem*rem);
        tempNumber/=10;
    }  
 
/* checking number is armstrong or not */ 
    if(sum==number)  
        printf("%d is an Armstrong number.",number);
    else
        printf("%d is not an Armstrong number.",number);
 
    return 0;
}
----------------------------------------------------------------------------------------------------------------------------------------------
 int main() {
   int num, originalNum, remainder, n = 0;
   float result = 0.0;

   printf("Enter an integer: ");
   scanf("%d", &num);

   originalNum = num;

   // store the number of digits of num in n
   for (originalNum = num; originalNum != 0; ++n) {
       originalNum /= 10;
   }

   for (originalNum = num; originalNum != 0; originalNum /= 10) {
       remainder = originalNum % 10;

      // store the sum of the power of individual digits in result
      result += pow(remainder, n);
   }

   // if num is equal to result, the number is an Armstrong number
   if ((int)result == num)
    printf("%d is an Armstrong number.", num);
   else
    printf("%d is not an Armstrong number.", num);
   return 0;
}
