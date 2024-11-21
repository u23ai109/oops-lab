public class DrivingCost {
    public static void main(String[] args) {
        if (args.length < 6) {
            System.out.println("Provide inputs");
            return;
        }

        double totalMiles = Double.parseDouble(args[0]);    
        double costPerGallon = Double.parseDouble(args[1]);  
        double milesPerGallon = Double.parseDouble(args[2]);  
        double parkingFees = Double.parseDouble(args[3]);     
        double tolls = Double.parseDouble(args[4]);           
        int carpoolSize = Integer.parseInt(args[5]);          


        double fuelCostPerDay = (totalMiles / milesPerGallon) * costPerGallon;


        double dailyDrivingCost = fuelCostPerDay + parkingFees + tolls;


        System.out.printf(" driving cost is: %f\n", dailyDrivingCost);


        if (carpoolSize > 1) {
            double sharedCost = dailyDrivingCost / carpoolSize;
            System.out.printf(" carpooling cost: %f\n", sharedCost);
            double savings = dailyDrivingCost - sharedCost;
            System.out.printf("savings is %f\n", savings);
        }
    }
}
