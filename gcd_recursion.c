#include<stdio.h>
int gcd(int m,int n)
{
    int rem=m/n;
    if(rem==0)
    return(n);
    else
    return(gcd(n,rem));
}
void main()
{
    int n1,n2,res;
    printf("Enter 2 numbers : ");
    scanf("%d %d",&n1,&n2);
    res=gcd(n1,n2);
    printf("The greatest commom divisor of %d and %d is %d",n1,n2,res);
}
