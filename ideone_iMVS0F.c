#include <stdio.h>

int main(void) {
int a[50],b,c,d,i;
printf("\nEnter an integer which is an initial number then its increment value and length of the array");
scanf("%d %d %d",&b,&c,&d);
printf("\nThe Numbers in the array:");
for(i=0;i<=d-1;i++)
{
	if(i==0)
	{
		a[i]=b;
	}
	else if(i>0)
	{
		a[i]=b+(c*i);
	}
	printf("\n%d",a[i]);
}
printf("\nThe numbers matched with their index are:");
for(i=0;i<=d-1;i++)
{
	if(a[i]==i)
	printf("\n%d",a[i]);
}
	return 0;
}
