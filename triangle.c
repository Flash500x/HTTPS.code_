#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    double area,s;
    area = 0;
    s = 0;
    printf("enter the three sides of a triangle");
    scanf("%d %d %d",&a,&b,&c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("the area of the triangle is:");
    printf("%f",area);
    return 0;
}