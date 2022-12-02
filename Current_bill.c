#include<stdio.h>
int main()
{
    int n;
    float unit,bill,tb;
    scanf("%d",&n);
    if(n<200)
    {
        unit=1.20;
    }
    else if(n>=200 && n<400)
    {
        unit=1.50;
    }
    else if(n>=400 && n<600)
    {
        unit=1.80;
    }
    else 
    {
        unit=2.00;
      
    }
    bill=n*unit;
    if(bill>400)
    {
        tb=bill+bill*0.15;
    }
    else
    {
        tb=bill+100;
    }
     printf("%.2f",tb);
}