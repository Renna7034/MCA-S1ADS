#include<stdio.h>
void main(){

int a[5],i,j,temp=0;
printf("enter 5 numbers");
for(i=0;i<1;i++)
{
 scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
 if(a[i]>a[j])
 {
 temp=a[i];
 a[i]=a[j];
 a[j]=temp;
 }
}
}
printf("sorted array");
for(i=0;i<5;i++)
{
printf("%d\t",a[i]);
}
}
