#include<stdio.h>
void main()
{
 printf("The following program is to check whether the given number is Prime number or not\n\n");
 int num,flag=0;
 printf("Enter a number to check if it is a prime number or not:- ");
 scanf("%d",&num);
 for(int i=2;i<num;i++)
 {
   if(num%i==0)//If the original number is divisible by any number other than 1 and itself than it is not a prime number
   {
     flag++;
     break;//The loop will break once any number fulfills the condition
   }
 }
 if(flag==1)//If the value of flag is 1 than that means it is divisible by an number other than itself,it is not a prime number else it is a prime number
 {
   printf("%d is not a prime number",num);
 }
 else
 {
   printf("%d is a prime number",num);
 }
 }
