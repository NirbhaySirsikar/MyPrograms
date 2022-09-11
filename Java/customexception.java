class customexception extends Exception {
    customexception(String s) {
        super(s);
    }
}

class A {
    void checkage(int age) throws customexception {
        if (age < 18) {
            throw new customexception("not elegible for voting");
        } else {
            System.out.println("Elegible for voting");
        }
    }

    public static void main(String[] args) {
        try {

            A obj1 = new A();
            obj1.checkage(51);
            obj1.checkage(16);
        } catch (customexception e) {
            System.out.println(e);
        }

    }
}
