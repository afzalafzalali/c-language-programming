//Reverse of a number//
#include<stdio.h>
#include<conio.h>
void main(){
    int x,d1,d2,d3;
    printf("enter a 4 digit number\n");
    scanf("%d",&x);
    d1=x % 10;
    x/=10;
    d2=x % 10;
    x/=10;
    d3=x % 10;
    x/=10;
    x=d1*1000+d2*100+d3*10+x;
    printf("the reverse is %d",x);
    getch();
}
