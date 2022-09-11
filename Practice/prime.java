import java.util.Scanner;

class prime {
    public static void main(String[] args) {
        System.out.println("Enter your number: ");
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int flag = 0;
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                flag = 1;
                break;
            } else {
                flag = 0;
            }
        }
        if (flag == 1) {
            System.out.println("Not Prime number");
        } else {

            System.out.println("Prime number ");
        }

    }
}