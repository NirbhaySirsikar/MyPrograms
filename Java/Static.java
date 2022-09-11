class test {
    int a, b;
    static int c = 10;

    void setdata(int a, int b) {
        this.a = a;
        this.b = b;
    }
}

class Static {
    public static void main(String[] args) {
        test t1 = new test();
        t1.setdata(10, 20);
        test.c = 40;
        System.out.println(t1.a);
        System.out.println(t1.b);
        System.out.println(t1.c);
        t1.c = 50;
        System.out.println(t1.c);
    }
}
