#include<stdio.h>
int main()
{
int arr[25],n,sum=0,i;
float avr;
printf("enter the number of integer you want  ");
scanf("%d",&n );
for(i=0;i<n;++i)
{
printf("\nnumber%d= ",i+1);
scanf("%d",&arr[i] );
sum+=arr[i] ;
}
avr=sum/n;
printf("\naverage=%f",avr);
return 0;
} 