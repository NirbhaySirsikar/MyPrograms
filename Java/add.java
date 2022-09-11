import java.util.*;

class add1 {
    int a, b, sum;

    void ip(int a1, int b1) {
        a = a1;
        b = b1;

    }

    void op() {
        sum = a + b;
        System.out.print("The sum is " + sum);
    }
}

class add {
    public static void main(String[] args) {
        int x, y;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter first number- ");
        x = sc.nextInt();
        System.out.print("Enter second number- ");
        y = sc.nextInt();
        add1 obj = new add1();
        obj.ip(x, y);
        obj.op();
    }
}