/*
santosh jung basnet
*/


#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,temp;
    printf("enter the no.");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("before swapped is:%d",temp);
    printf("the value before swap:%d",a);
    printf("the after swap:%d",a);
    printf("the value after swap:%d",b);
    getch();
    return 0;




}

