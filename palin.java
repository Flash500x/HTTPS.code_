import java.util.*;
class palin
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter an integer");
        int n = sc.nextInt();
        int ld = 0;
        int rev = 0;
        int cpy = n;
        while(n>0)
        {
            ld = n%10;
            rev = rev*10+ld;
            n = n/10;
        }
        if(rev == cpy)
        System.out.println("palindrome");
        else 
        System.out.println("Not palindrome");


    }


}
