class A{
int a,b;

}
class B extends A{
int sum;
public B(int a , int b){
sum = a + b;
System.out.println(sum);
}
}
class inheri{
public static void main( String args[]){
B obj = new B(2,3);

}
}