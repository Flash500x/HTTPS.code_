import java.util.*;
class areasofshapes
{
    int area;double Area;
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        do
        {
        System.out.println("enter your choice ; 1 for rectangle , 2 for circle , 3 for square and 4 for triangle");
        int n = sc.nextInt();// input variable
        areasofshapes ob = new areasofshapes();
        switch(n)// switch case start
        {
              case 1:
                     System.out.println("enter sides of the rectangle");// area of rectangle
                     int a = sc.nextInt();// first side of rectangle
                     int b = sc.nextInt();// second side of rectangle
                     int kent = ob.rec(a,b);// object that stores the value from the function rec()
                     System.out.println("the area is:"+kent);//printing the area
                     break;
              case 2:
                     System.out.println("enter radius of the circle");// area of circle
                     int r = sc.nextInt();// radius of circle
                     double rad = ob.cir(r);//object that stores the value from the function cir()
                     System.out.println("the area is:"+rad);//printing the area
                     break;
              case 3:
                     System.out.println("enter side of the square");// area of square
                     int v = sc.nextInt();// side of the square
                     int deg = ob.sqr(v);// object to store the value from the funtion sqr()
                     System.out.println("the area is:"+deg);// printing the area
                     break;
              case 4:
                     System.out.println("enter sides of triangle");// area of the triangle
                     int t = sc.nextInt();// first side of the triangle
                     int u = sc.nextInt();// second side of the triangle
                     int x = sc.nextInt();// third side of the triangle
                     int gle = ob.tri(t, u, x);// object that stores the value from the function tri()
                     System.out.println("the area is:"+gle);// printing the area
                     break;
              default:
                     System.out.println("error");
                     break;
        }// switch case end
    
    }while(true); 
        
    } // main
    int rec(int a,int b)// computing area of rectangle
    {
        area = 0;
        area = a*b;
        return area;     
    } // rec
    double cir(double r)// area of circle
    {
        Area = 0.0;
        Area = 3.14*(r*r);
        return Area;
    }// cir
    int sqr(int v)// area of square
    {
        area = 0;
        area = v*v;
        return area;
    }//sqr
    int tri(int t,int u, int x)// area of triangle
    {
        int s = 0;
        s = (t+u+x)/2;
        area = (int)(Math.sqrt(s*(s-t)*(s-u)*(s-x)));
        return area;
    }//tri

}// class