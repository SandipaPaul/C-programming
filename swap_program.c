#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,temp;
    printf ("enter numbers");
    scanf("%d%d",&a,&b);
    printf("\n before swapping..n a=%d,b=%d",a,b);
    temp= a;
    a= b;
    b= temp;
    printf("\n after swapping..a=%d,b=%d",a,b);
    getch(); 
}