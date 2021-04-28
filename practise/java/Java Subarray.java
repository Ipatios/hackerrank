import java.util.*;

public class Java_Subarray {

    public static void main(String[] args) {
        Scanner in= new Scanner(System.in);
        int n=in.nextInt();
        int[] ch= new int[n];
        for(int i=0; i<n; i++){
           ch[i]=in.nextInt();
        }
        //counts the sub that are negative
        int max=0;
// Prints all subarrays in arr[0..n-1]
    for (int i=0; i <n; i++)
    {
        for (int j=i; j<n; j++)
        {
            int team=0;//if score is negative then it means the sub is negative
            for (int k=i; k<=j; k++){
                
                team+=ch[k];
               if(team<0 && k==j){
                max++;
               }
                 
            }    
        }
    }
    System.out.println(max);
    in.close();
    }
}