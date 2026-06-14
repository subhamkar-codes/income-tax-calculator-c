#include <stdio.h>
int main()
{
    float income , tax= 0;
    printf ("Enter the income:\n");
    scanf ("%f", &income);
    if (income <=250000 ) {
   tax = 0;
    }
    else if(income>250000 && income<=500000){
    tax = (income*5)/100;
    }
    else if (income>500000 && income<=1000000){
       tax = (income*20)/100;   
    }
    else if (income >1000000){
        tax =(income*30)/100;   
    }
    printf ("The tax you need to pay is %f",tax);

    return 0;
}
