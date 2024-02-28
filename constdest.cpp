import java.util.Scanner;
class student1{
    public 
        student1(){
            System.out.println("Hi! constructer has been created");
        }
        String fullName;
        int rollNum;
        double semPerentage;
        String collegeName;
        int collegeCode;
}
class student{
    public static void main(String[] args){
        Scanner op=new Scanner(System.in);
        student1 Sai=new student1();
        System.out.println("Enter your name :");
        Sai.fullName=op.next();
        System.out.println("Enter your rollnumber :");
        Sai.rollNum=op.nextInt();
        System.out.println("Enter your sempercantage :");
        Sai.semPerentage=op.nextInt();
        System.out.println("Enter your collegename :");
        Sai.collegeName=op.next();
        System.out.println("Enter your collegecode :");
        Sai.collegeCode=op.nextInt();
        System.out.println("Name : "+Sai.fullName+"\nRoll number : "+Sai.rollNum+"\nSempercentage : "+Sai.semPerentage+"\nCollegename : "+Sai.collegeName+"\nCollegecode : "+Sai.collegeCode);
    }
}
