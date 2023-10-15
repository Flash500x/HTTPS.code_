#include <stdio.h>
int main()
{
    int n;double sum; sum =0;int d;
    printf("enter an integer");
    scanf("%d",&n);
    while(n>0)
    {
        d = n%10;
        sum = sum+d;
        n = n/10;
    }
    printf("sum is : %f",sum);
    return 0;
}
