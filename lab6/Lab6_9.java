class Lab6_9 {

    static boolean checkPassword(String password){
        if(password.length()<5 || password.length()>12){
            return false;
        }

        if(!password.matches(".[a-z].") || !password.matches(".[0-9].")){
            return false;
        }

        if(!password.matches("[a-z0-9]+")){
            return false;
        }

        if(pattern(password)){
            return false;
        }
        return true;

    }

    static boolean pattern(String password){
        int l=password.length();
     for(int i=0;i<l-1;i++){
         for(int j=1;i+2*j<=l;j++){
             String sub=password.substring(i,i+j);
             String next=password.substring(i+j,i+2*j);
             if(sub.equals(next)){
                 return true;
             }
         }
     }
     return false;
    }

    public static void main(String[] args){
        java.util.Scanner scanner = new java.util.Scanner(System.in);
        System.out.println("enter Password");
        String password=scanner.nextLine();
        if(checkPassword(password)){
            System.out.println("Password Accepted");
        }else{
            System.out.println("Password Unacceptable");
        };
    }
}
