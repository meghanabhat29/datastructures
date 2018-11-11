#include <stdio.h>
#include<stdio.h>
struct Complex
{
    int real;
    int imag;
    
}c1,c2,c3;
 struct Complex add()
{
    struct Complex c3;
    c3.real=c1.real+c2.real;
    c3.imag=c1.imag+c2.imag;
    return(c3);
}
void main()
{
    printf("Enter the first complex number :");
    scanf("%d %d",&c1.real,&c1.imag);
    printf("Enter the second number");
    scanf("%d %d",&c2.real,&c2.imag);
    c3=add(c1,c2);
    printf("The sum is %d +i%d",c3.real,c3.imag);
}

