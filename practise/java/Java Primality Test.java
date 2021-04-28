import java.math.*;
import java.util.*;

public class Java_Primality_Test {



    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        final String n = scanner.nextLine();
        BigInteger B= new BigInteger(n);
         boolean maybe= B.isProbablePrime(1);
         if(maybe){
             System.out.println("prime");
         }else{
             System.out.println("not prime");
         }
        scanner.close();
    }
}
