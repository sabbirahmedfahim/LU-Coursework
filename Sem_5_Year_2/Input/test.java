import java.util.Scanner;

public class test
{
    public static void main(String [] args)
    {
        // create scanner object
        Scanner sc = new Scanner(System.in);

        int x;
        x = sc.nextInt();

        // System.out.println(x);

        if(x%2 == 1) System.out.println("Odd");
        else System.out.println("Even");
    }

}