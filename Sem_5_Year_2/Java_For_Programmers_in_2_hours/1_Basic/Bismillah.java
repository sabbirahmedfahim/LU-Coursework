// class amarJaIcchaTaiLikhbo // it also works, that means class name can be different than the file name (unless public class)
class Bismillah
{
    public static void main(String [] args) // void return nothing hahaha
    {
        System.out.println("Bismillah\n");

        // 
        System.out.println("integer : ");
        int studentID = 255;
        System.out.println(studentID);
        
        // newLine 
        System.out.println();

        // together (int + newLIne)
        System.out.println(studentID + "\n");


        // long
        System.out.println("long : ");
        long tot_pupil = 746;
        System.out.print(tot_pupil + "\n\n");
        
        // char
        System.out.println("char : ");
        char c = 'S';
        System.out.println(c + "\n");
                
        // double
        System.out.println("double : ");
        double mangoPrice = 24.576;
        System.out.println(mangoPrice + "\n");

        /*problems with float*/
        // float applePrice = 24.576; // shows error because java is thing its a double value

        // fix float decleration
        System.out.println("float : ");
        float applePrice = 24.576f;
        System.out.println(applePrice + "\n");

        // calling mew func
        System.out.println("calling mew func : ");
        meEeeww();
        
        // calling operatorsKivabeKajKore
        System.out.println("calling operatorsKivabeKajKore func : ");
        operatorsKivabeKajKore();
    }


    // another class
    public static void meEeeww()
    {
        System.out.println("Cat is gone, but now we have a sneaky little mouse for you. Thanks :)");
    }

    public static void operatorsKivabeKajKore()
    {
        int x = 10;
        int y = 20;
        boolean res = x > y;

        // returns true or false, idk why it only runs on terminal but shows error in cph extension
        System.err.println(res); 
    }
}