import java.math.BigInteger;
import java.util.Scanner;
public class Product{
 public static void main(String[] args){
 Scanner s=new Scanner(System.in);
 while(s.hasNext()){
 BigInteger a=s.nextBigInteger();
 BigInteger b=s.nextBigInteger();
 BigInteger c=a.multiply(b);
 System.out.println(c);
  }
 }
}
