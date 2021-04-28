import java.util.Scanner;

class Solution {
    
    public static void main(String[] args) {
      
        Scanner scan=new Scanner(System.in);
        int T=scan.nextInt();
        multipleSizes(T);
        scan.close();
    }




    public static void multipleSizes(int T){
        Scanner scan=new Scanner(System.in);
        for(int i=0; i<T; i++){
            
            
            try {
                Long n= scan.nextLong();
                System.out.println(n+" can be fitted in:");
            
            if(n<=Byte.MAX_VALUE && n>=Byte.MIN_VALUE){
                System.out.println("* byte");
            }
             if(n<=Short.MAX_VALUE && n>=Short.MIN_VALUE){
                System.out.println("* short");
            } 
            if(n<=Integer.MAX_VALUE && n>=Integer.MIN_VALUE){
                System.out.println("* int");
            }  
            if(n<=Long.MAX_VALUE && n>=Long.MIN_VALUE){
                System.out.println("* long");
            }
           /* if(n<=Float.MAX_VALUE &&n>=Float.MIN_VALUE){
                System.out.println("* float");
            }
            if(n<=Double.MAX_VALUE &&n>=Double.MIN_VALUE){
                System.out.println("* double");
            }*/
           
          
        } catch (Exception e) {
            System.out.print("can't be fitted anywhere.");
        }
        
        }  
  scan.close();                 
}

}

/* δευτερη λυση
import java.util.*;
import java.io.*;
import java.math.BigInteger;



class Solution{
    public static void main(String []argh)
    {



        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();

        for(int i=0;i<t;i++)
        {
            try
            {
                long x=sc.nextLong();
                
                System.out.println(x+" can be fitted in:");
                if(x>=(Byte.MIN_VALUE) && x<=Byte.MAX_VALUE)System.out.println("* byte");
                if(x>=(Short.MIN_VALUE) && x<=Short.MAX_VALUE)System.out.println("* short");
                if(x>=(Integer.MIN_VALUE) && x<=Integer.MAX_VALUE)System.out.println("* int");
                if(x>=(Long.MIN_VALUE) && x<=Long.MAX_VALUE)System.out.println("* long");

                //Another way. Be careful to take the interval of numbers. They are signed char so you should mines 1. for example byte is not in range of 2^8 and -2^8. it is signed char so it should be between 2^7 and 2^7-1.
                // BigInteger y = BigInteger.valueOf(x);
                // System.out.println(x+" can be fitted in:");
                // if(y.longValue()>=-128 && x<=127)System.out.println("* byte");
                // if(y.longValue()>=-(Math.pow(2,15)) && y.longValue()<=(Math.pow(2,15)-1))System.out.println("* short");
                // if(y.longValue()>=-(Math.pow(2,31)) && y.longValue()<=Math.pow(2,31)-1)System.out.println("* int");
                // if(y.longValue()>=-(Math.pow(2,63)) && y.longValue()<=Math.pow(2,63)-1)System.out.println("* long");
                
                
            }
            catch(Exception e)
            {
                System.out.println(sc.next()+" can't be fitted anywhere.");
            }

        }
    }
}*/
