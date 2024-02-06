import java.util.Scanner;
public class evenorodd {
    static void check(int a)
    {
        if(a%2==0)
        {
            System.out.println("Given number is even");
        }
        else{
            System.out.println("Given number is odd");
        }
    }
    public static void main(String[] args)
    {
        int a;
        System.out.println("Enter a number");
        Scanner sc=new Scanner(System.in); 
        a=sc.nextInt();
        sc.close();
        check(a);
    }
}


