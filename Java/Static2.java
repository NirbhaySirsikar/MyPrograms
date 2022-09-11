class Static2 {
    int a, b;
    static int c = 10;

    static void display() {
        System.out.println(c);

    }

    static {
        System.out.println("IN Static");
    }

}
