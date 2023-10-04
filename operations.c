#include <stdio.h>
#include <math.h>
int main()
{
    int t,u,ch,sum,r,f,g,a,b,c,k,j,diff,i;
    double area;
    double area2;
    double area3,s;
    
    printf("enter 1 for finding the sum of two numbers, enter 2 for the area of a circle , enter 3 for the area of a rectangle , enter 4 for the area of a triangle , enter 5 for the difference of two numbers , enter 6");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1: //sum of two numbers 
            
            
            sum = 0;
            printf("enter two integers");
            scanf("%d %d", &t ,&u);
            sum = t+u;
            printf("the sum is :");
            printf("%d",sum);      
        
     break;

     case 2: // area of circle
            
            
            area2 = 0;
            printf("enter radius of circle");
            scanf("%d",&r);
            area2 = 3.14*(r*r);
            printf("the area of the circle is :");
            printf("%f",area2);

      break;

     case 3: //area of rectangle
            
            area = 0;
            printf("enter sides of the rectangle");
            scanf("%d %d",&f,&g);
            area = f*g;
            printf("the area of the rectangle is :");
            printf("%f",area);

      break;

     case 4: // area of triangle
            
            area3 = 0;
            s = 0;
            printf("enter the three sides of a triangle");
            scanf("%d %d %d",&a,&b,&c);
            s = (a+b+c)/2;
            area3 = sqrt(s*(s-a)*(s-b)*(s-c));
            printf("the area of the triangle is:");
            printf("%f",area3);   

      break;

     case 5: // difference of two integers

            
            diff = 0;
            printf("enter two integers");
            scanf("%d %d", &k ,&j);
            diff = k-j;
            printf("the difference is :");
            printf("%d",diff); 
            for(i=1;i>0;i++)
            {
                printf("99990999");
            }

      break; 

       

     default:
            printf("error");
            
      break;
       
    }//switch
    return 0;
}//main
