#include <stdio.h>
#include <math.h>

int main()
{
    float time,amountrecieved;

printf("enter the number of hours::");

    scanf("%f",&time);


    if (time <= 40)
        amountrecieved = 12*time;
    else
      {
        amountrecieved=(12*40)+(time-40)*18;
      }

printf("the total amount recieved::%f\n",amountrecieved);

float tax;

    if ( amountrecieved <= 300)
    tax=((15/100) * (amountrecieved));

    else
        if( amountrecieved >=300 && <= 450)
         tax= 60 + ((amountrecieved) - 300) * (20/100);

         else
         tax=90+((amountrecieved) - 450) * (25/100);


         printf("total taxes are :%f",tax);

    return 0;
}
