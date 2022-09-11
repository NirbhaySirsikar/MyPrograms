class oddeven extends Thread {
    oddeven(String s) {
        super(s);
    }

    public void run() {
        String term = Thread.currentThread().getName();
        int oddc = 1, evenc = 0;
        for (int i = 0; i <= 50; i++) {
            if (term.equals("odd")) {
                System.out.println(term + " " + oddc);
                oddc = oddc + 2;

            }
            if (term.equals("even")) {
                System.out.println(term + " " + evenc);
                evenc = evenc + 2;

            }
        }
    }

    public static void main(String[] args) {
        oddeven t1 = new oddeven("odd");
        oddeven t2 = new oddeven("even");
        t1.start();
        t2.start();

    }
}
