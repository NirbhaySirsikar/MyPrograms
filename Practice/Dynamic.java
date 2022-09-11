class Dynamicmethod {
    public static void main(String args[]){
        A ref;
        ref = new A();
        ref.m1();
        ref = new B();
        ref.m1();
        ref = new C();
        ref.m1();
    }    
}
class A{
    void m1(){
        System.out.println("This is A class");
    }
}

class B extends A{
    void m1(){
        System.out.println("This is B class");
    }
}

class C extends B{
    void m1(){
        System.out.println("This is C Class");
    }
}
