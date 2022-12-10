#include<stdio.h>
int main()
{
    char V;
    scanf("%c",&V);
    if(V=='A' || V=='E' || V=='I' ||V=='O' || V=='U' ||V=='a' || V=='e' ||V=='i' ||V=='o' ||V=='u')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
}