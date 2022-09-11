
public class array {
    public static void main(String[] args) {

        int arr[] = { 6, 9, 8, 2, 5 };
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += arr[i];
        }
        System.out.println(sum);
        int avg = sum / 5;
        System.out.println(avg);
    }
}
