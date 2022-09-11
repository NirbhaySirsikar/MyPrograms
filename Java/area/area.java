import java.util.*;

class circle {
    double r;
    double p = 3.14;
    Scanner sc = new Scanner(System.in);

    void func() {
        System.out.print("Enter radius of the circle: ");

        int x = sc.nextInt();
        r = x;
        System.out.print("The area of circle is " + (p * r * r));
    }

}

class square {
    double r;

    Scanner sc = new Scanner(System.in);

    void func() {
        System.out.print("Enter lenght of the square: ");

        int x = sc.nextInt();
        r = x;
        System.out.print("The area of square is " + (r * r));
    }

}

class box {
    Scanner sc = new Scanner(System.in);

    void func() {
        System.out.print("Enter lenght of the box: ");
        int x = sc.nextInt();
        System.out.print("Enter height of the box: ");
        int y = sc.nextInt();
        System.out.print("Enter width of the box: ");
        int z = sc.nextInt();
        System.out.print("The area of the box is " + (x * y * z));
    }

}

class area {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("What so you want:\n1.Circle\n2.Square\n3.Box\nEnter 1,2 or 3 here: ");
        int n = sc.nextInt();
        if (n == 1) {
            circle obj = new circle();
            obj.func();
        } else if (n == 2) {
            square obj = new square();
            obj.func();

        } else if (n == 3) {
            box obj = new box();
            obj.func();
        } else {
            System.out.print("Invalid input");
        }
    }

}
