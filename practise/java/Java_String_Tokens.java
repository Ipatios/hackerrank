import java.util.Scanner;
import java.util.StringTokenizer;

public class Java_String_Tokens {
    public static void main(String[] args) {
        Scanner scan =new Scanner(System.in);
        String str =scan.nextLine() ;
        scan.close();
 
        StringTokenizer defaultTokenizer = new StringTokenizer(str,"!,?._'@]/ ");
         
        System.out.println("Total number of tokens found : " + defaultTokenizer.countTokens());
         
        while (defaultTokenizer.hasMoreTokens())
        {
            System.out.println(defaultTokenizer.nextToken());
        }
        
    }
    
}
