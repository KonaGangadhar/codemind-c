#include<stdio.h>
float itc(int);
int main()
{
	int i;
	scanf("%d",&i);
	float res=itc(i);
	printf("%.2f",res);
}
float itc(int x)
{
	float z;
	z=2.54*x;
	return z;
}