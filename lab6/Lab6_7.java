public class Lab6_7 {
    int d1, d2;
    int point;
    int result;

    static int getRandint() {
        return (int) (1 + Math.random() * 6);
    }

    static int rollDice() {
        int d1 = getRandint();
        int d2 = getRandint();
        return d1 + d2;
    }

    static int getResult(int point) {
        if (point == 2 || point == 3 || point == 12) {
            return 0;
        } else if (point == 7 || point == 11) {
            return 1;
        } else {
            return -1;
        }
    }

    static void printResult(int result) {
        if (result == 0) {
            System.out.println("You lost");
        } else if (result == 1) {
            System.out.println("You won");
        }
    }

    // Roll until point or 7 is hit
    static void makeYourPoint(int point) {
        int result;
        do {
            result = rollDice();
            System.out.println("Rolled: " + result);
        } while (result != point && result != 7);

        if (result == 7)
            printResult(0);
        else
            printResult(1);
    }

    public static void main(String[] args) {
        int point = rollDice();
        System.out.println("Your point: " + point);

        int result = getResult(point);

        if (result == 0 || result == 1) {
            printResult(result);
        } else {
            makeYourPoint(point);
        }
    }
}
