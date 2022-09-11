class Demo {
    int a, b;

    void getdata(int a, int b) {
        this.a = a;
        this.b = b;

    }

    void show() {
        System.out.println(a);
        System.out.println(b);

    }
}

class Months {
    public static void main(String[] args) {
        Demo obj = new Demo();
        obj.getdata(5, 6);
        obj.show();
    }
}