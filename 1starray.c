#include<stdio.h>
void main()
{
int n,sum=0,i,array[20],avr;
printf("enter the number of digit ");
scanf("%d",&n);
for(i=0;i<n;++i)
{
printf("\n%d number is ",i+1);
scanf("%d",&array[i]);
sum+=array[i];
}
avr=sum/n;
printf("average is %d",avr);
return(0);
}