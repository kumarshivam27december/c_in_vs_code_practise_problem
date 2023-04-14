#include<stdio.h>  
 int main()    
{
long int n;    
int sum=0,m;    
printf("Enter a number:");    
scanf("%ld",&n);    
while(n>0)    
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
}    
printf("Sum is=%d",sum);    
return 0;  
}   



