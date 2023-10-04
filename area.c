#include <stdio.h>
int main()
{
    int r;
    double area;
    area = 1;
    printf("enter radius of circle");
    scanf("%d",&r);
    area = 3.14*(r*r);
    printf("the area of the circle is :");
    printf("%f",area);
    return 0;
}