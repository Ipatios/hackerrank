import java.math.BigInteger;
import java.util.*;
public class Java_BigInteger {
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        BigInteger a=scan.nextBigInteger(),
        b=scan.nextBigInteger();
        scan.close();
        
          System.out.println(a.add(b));
          System.out.println(a.multiply(b)); 
        
         

    }
}
