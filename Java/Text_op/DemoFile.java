import java.io.*;
class DemoFile {
    public static void main(String[] args) {
        try {
            int i = 0;
            FileOutputStream fout = new FileOutputStream("pu1.txt");
            FileInputStream fin = new FileInputStream("pu2.txt");
            while((i=fin.read())!= -1){
                fout.write(i);
            }
            System.out.println("file copied successfully");
        } catch (Exception e) {
            
        }
    }
    
}
