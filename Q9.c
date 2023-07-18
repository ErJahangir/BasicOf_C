#include<stdio.h>
void main()
{
    int p,r,t;
    float si;
    printf("Enter the value of principal");
    scanf("%d",&p);
    printf("Enter the value of Rate");
    scanf("%d",&r);
    printf("Enter the value of Year");
    scanf("%d",&t);
    si =(p*r*t)/100.0;
    printf("Simple interest is %f",si);
}