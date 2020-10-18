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

                   printf("\nthe total amount recieved::%f\n",amountrecieved);

float tax;

    if(amountrecieved <= 300)

      tax = ((15*amountrecieved)/100);

          else  if( amountrecieved >=300 && amountrecieved <=450)


                 tax= 45 + ((((amountrecieved) - 300) * 20)/100);
                else
                     tax=90+((((amountrecieved) - 450) * 25)/100);



printf("\ntotal taxes are :%f\n",tax);

    return 0;
}
