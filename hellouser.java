import java.util.Scanner;
class hellouser
{
    public static void main (String[] args)
    {
        String take;
        System.out.print("Enter a username ");
        Scanner scan = new Scanner(System.in);
        take=scan.next();
        scan.close();
        System.out.println("Hello "+take);
    }
}
