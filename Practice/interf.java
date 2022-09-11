interface In1 {
    final int a = 10;

    void display();
}

class interf implements In1
{
    public void display(){
            System.out.println("Abstract class example");
    
        }   
    public static void main(String[] args) {
        interf t = new interf();
        t.display();
        System.out.println(a);
    }

}
