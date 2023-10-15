#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter three integers");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b)
    {
        if (a>c)
        {
            printf("%d",a);
            printf(" largest");
        }
        else
        {
            printf("%d",c);
            printf("largest");
        }
    }
    else if(b>c)
        {
         printf("%d",b);
         printf(" largest");
        }
    else
        {
        printf(" %d",c);
        printf(" largest");
        }
    return 0;
}
