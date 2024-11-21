interface Function{
    int evaluate (int i);
}

class Half implements Function{
    int n;
    public int evaluate(int i){
        return i / 2;
    }
}

class Lab6_13{
    public static void main(String[] args){
    int[] a=new int[5];
    java.util.Scanner scanner = new java.util.Scanner(System.in);
    for(int i=0;i<5;i++){
        a[i]=scanner.nextInt();
    }

    Half[] b=new Half[5];
    for(int i=0;i<5;i++){
        b[i] = new Half();
        b[i].n=b[i].evaluate(a[i]);
        System.out.println(b[i].n +" ");
    }
}
}