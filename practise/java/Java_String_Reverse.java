import java.util.Scanner;

public class Java_String_Reverse {
    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        sc.close();
    
        StringBuffer sbr = new StringBuffer(A);
        sbr.reverse();
        String str =sbr.toString();
        if(str.equals(A)){
         System.out.println("Yes");   
        }
        else{
            System.out.println("No");
        }
        
    }
    
}
