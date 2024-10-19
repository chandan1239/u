#include<stdio.h> 
void main()
{
int n,i,temp;
float a[20],sum,mean,var,sd;
float*p;
printf("Enter the total number of elements:\n");
scanf("%d",&n);
printf("enter the elements to an array: \n");
for(i=0;i<n;i++)
{
scanf("%f",&a[i]);
}
p=a;
sum=0.0;
for(i=0;i<n;i++)
{
sum=sum+*(p+i);
}
mean=sum/n;
temp=0.0;
for(i=0;i<n;i++)
{
temp=temp+(*(p+i)-mean)*(*(p+i)-mean);
}
var=temp/n;
sd=sqrt(var);
printf("Sum=%f\n",sum);
printf("Mean=%f\n",mean);
printf("Variance=%f\n",var);
printf("Standard deviation= %f\n",sd);
}