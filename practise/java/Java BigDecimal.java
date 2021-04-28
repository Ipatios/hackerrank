import java.math.BigDecimal;
import java.util.*;
class Java_BigDecimal{

    public static void main(String []args){
        //Input
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        String []s=new String[n+2];
        for(int i=0;i<n;i++){
            s[i]=sc.next();
        }
      	sc.close();

        //Write your code here
        BigDecimal A[]= new BigDecimal[n+1];
        BigDecimal B[]= new BigDecimal[n+1];
        
        String temp;
        for (int i = 0; i < n; i++) {     
            for (int j = i+1; j < n; j++) { 
                
                  A[i] =new BigDecimal(s[i]); 
                   B[j] =new BigDecimal(s[j]);  
                
                   
               if(A[i].compareTo(B[j])<0) {    
                   temp = s[i];    
                   s[i] = s[j];    
                   s[j] = temp;
                      
               }
                    
            }  
        }   
        //Output
        for(int i=0; i<n; i++)
        {
            System.out.println(s[i]);
        }
    

}
}