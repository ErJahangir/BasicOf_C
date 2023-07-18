#include<stdio.h>
void main()
{
    int l,b,h;
    int volume;
    printf("Enter the value of length");
    scanf("%d",&l);
    printf("Enter the value of breagth");
    scanf("%d",&b);
    printf("Enter the value of hight");
    scanf("%d",&h);
    volume=l*b*h;
    printf("Volume of cuboid is %d",volume);
}