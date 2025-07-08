class choloCoffeeBanai
{
    int sugar;
    String cupsColor;

    /* Its fine to initialize the values */
    // int sugar = 12;
    // Sting cupsColor = "Red";

    public void pressKoro()
    {
        System.out.println("hush hush hush !!");
    }
    public void whereIsMyCoffee()
    {
        System.out.println("Coffee : ashtesi...");
    }
    public void chiniKotoDiso_CupKiBlack()
    {
        System.out.println("\n" + "Amount of sugar is " + sugar + " gm.");
        System.out.println("Sorry. It's Greeen." + "\n");
    }
}

class arekta
{
    public static void main(String [] args)
    {
        choloCoffeeBanai amarCoffee;
        // amarCoffee.sugar = 12; // not working yet! we have to make an object
        amarCoffee = new choloCoffeeBanai();
        amarCoffee.sugar = 12;
        amarCoffee.cupsColor = "Green";

        amarCoffee.pressKoro();

        amarCoffee.whereIsMyCoffee();

        amarCoffee.chiniKotoDiso_CupKiBlack();

        // if i initialize with red, it will print red
        System.out.println(amarCoffee.cupsColor); 
    }
}