class Driver{
    float miles;
    float fuel;
    static float avg=0;

   void setMilesAvg(float m, float n){
    miles=m;
    fuel=n;
   }

    void getAvg(){
        avg=avg+(miles/fuel);
        System.out.println("avg is "+avg);
    }
}

class Lab6_5{
    public static void main(String[] args){
        Driver d1 = new Driver();
        d1.setMilesAvg(80,4);
        d1.getAvg();
        d1.setMilesAvg(60,5);
        d1.getAvg();
        d1.setMilesAvg(70,5);
        d1.getAvg();
        d1.setMilesAvg(40,5);
        d1.getAvg();
    }
}