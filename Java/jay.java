import java.util.Scanner;

class OverloadDemo {
    void area(float x) {
        System.out.println("the area of the square is " + x * x + " sq units");
    }

    void area(float x, float y) {
        System.out.println("the area of the rectangle is " + x * y + " sq units");
    }

    void area(double x) {
        double z = 3.14 * x * x;
        System.out.println("the area of the circle is " + z + " sq units");
    }
}

public class jay {
    public static void main(String args[]) {
        OverloadDemo ob = new OverloadDemo();
        
        System.out.println("1.Area of circle");
        System.out.println("2.Area of square");
        System.out.println("3.Area of rectangle");
        System.out.println("Enter any of the above option: ");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        if (num == 1) {
            System.out.println("Enter the radius of the circle: ");
            double r = sc.nextDouble();
            
            ob.area(r);
        } else if (num == 2) {
            System.out.println("Enter the length of the side of square: ");
            float l = sc.nextFloat();
            
            ob.area(l);
        } else if (num == 3) {
            System.out.println("Enter the length of rectangle: ");
            float l = sc.nextFloat();
            System.out.println("Enter the breadth of rectangle: ");
            float b = sc.nextFloat();
            ob.area(l,b);
        }
    }
}