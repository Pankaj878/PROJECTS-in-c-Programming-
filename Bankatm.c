#include<stdio.h>
void main()
{
 int a,b,d,e,c;
 printf("     @@@@@@@@@ Welcome To Atm @@@@@@@@\nPlease Enter Your Pin=");
 scanf("%d",&b);
 if (b==1122)
{

    printf("       ****select Your choice****\n 1=Knowing Bank balance\n 2=Changing pin \n 3=Knowing statement\n 4=for exit\n   YOUR CHOICE=");
    scanf("%d",&a);
}
else
    {printf("wrong pin");
    }
switch(a)
{
case 1:
    printf("Bank Balance=1000.00");
    break;
case 2:
    printf("Enter your old pin=");
    scanf("%d",&e);
    for (d=0;d<3;d++)
   if (e==1122)
   {
    printf("Enter your new pin=");
    scanf("%d",&c);
    printf("Your new pin %d set successfully",c);
    break;
   }
  else if (d==2)
   {
       printf("You have reach a maximum number of attemed\nTry after some time");
   }
  else
   {
    printf("Wrong Pin\n Please try again\n Your old pin=");
    scanf("%d",&e);
   }

    break;
case 3:
    printf("your last 3 transaction \n \n 09/07/20-debt 2000.00\n \n 11/07/20-credit-3000.00\n \n 13/07/20-debt 1000.00\n \nLast Balance=1000.00");
    break;
case 4:
    break;
    }
printf("\nThank you for using ATM");
}
