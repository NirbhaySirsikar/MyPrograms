
class Game {
    public void type() {
        System.out.println("indoor and outdoors");

    }
}

class Cricket extends Game {
    public void type() {
        System.out.println("Outdoor sports");
    }

    public static void main(String args[]) {
        Game gm = new Game();
        Cricket ck = new Cricket();
        gm.type();
        ck.type();
        gm = ck;
        gm.type();
    }
}