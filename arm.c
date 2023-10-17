#include<stdio.h>
#include<math.h>
int main()
{
    int n,ld , sum;
    int c = 0;// counter variable
    sum = 0;//sum of digits 
    printf("enter and integer");
    scanf("%d",&n);
    int cpy = n;// making the first copy of the input value
    int cp = n;//making the second copy of the input value
    while(n>0)// to check for the number of digits
    {
        ld = n%10;// last digit
        c++;// counter variable incrementation
        n=n/10;
    }
    while(cpy>0)
    {
        ld = cpy%10;// last digit
        sum = sum+(int)(pow(ld,c));
        cpy = cpy/10;
    }
    if(sum == cp)
        printf("armstrong");
    else
        printf("not armstrong");
    return 0;
}