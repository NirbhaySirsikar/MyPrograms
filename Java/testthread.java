public class testthread extends Thread{
    public void run(){
        for(int i=1;i<=5;i++){
            try {
                System.out.println("thread is running"+i);
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                
                System.out.println(e);
            }
            
        }
    }
    public static void main(String[] args) {
        testthread obj1 = new testthread();
        testthread obj2 = new testthread();
        obj1.start();
        obj2.start();
        
    }
    
}

