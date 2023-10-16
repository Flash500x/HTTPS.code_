#include "twet.h"
#include<stdio.h>
int main()
{
    double pi = (22/7);int r; int area = 0;
    printf("enter radius of sphere");
    scanf("%d",&r);
    area = (int)((4/3)*pi*(r*r*r));
    printf("the area is %d",area);
}
