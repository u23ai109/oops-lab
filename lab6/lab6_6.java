class Lab6_6{

    static String model(String c){
        String category=c.toUpperCase();

        if(category.equals("SUV")){
            return "TATA SAFARI";
        }else if(category.equals("SEDAN")){
            return "TATA INDIGO";
        }else if(category.equals("ECONOMY")){
            return "TATA INDICA";
        }else if(category.equals("MINI")){
            return "TATA NANO";
        }else{
            return "NO CAR FOUND";
        }
    }

    public static void main(String[] args){
        java.util.Scanner scanner = new java.util.Scanner(System.in);
        System.out.println("enter category of car");
        String category=scanner.nextLine();
        String car=model(category);

        System.out.println("The car for ur model is "+car);
    }
}