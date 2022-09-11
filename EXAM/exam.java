class exam {
    public static void main(String[] args) {
        int count = 0;
        int flag = 0;
        int n = 2;
        while (count != 50) {
            for (int i = 2; i < n; i++) {
                flag = 0;
                if (n % i == 0) {
                    flag = 1;
                    break;
                } 
                else {
                    flag = 0;
                }
            }
            if (flag == 0) {
                // System.out.println((count+1)+". "+ n);
                System.out.println(n);
                count++;
            }
            n++;
        }
    }

}
