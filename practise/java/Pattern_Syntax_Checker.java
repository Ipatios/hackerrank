import java.util.Scanner;
import java.util.regex.Pattern;
public class Pattern_Syntax_Checker {
    public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		int testCases= in.nextInt();
        in.nextLine();
		for(int i=0; i<testCases; i++){
			String pattern = in.nextLine();
              try{
                  Pattern.compile(pattern);
                  System.out.println("Valid"); 
              }
              catch(Exception e){
                  System.out.println("Invalid");
              }
              
              
		}
        in.close();
	}
    
}
