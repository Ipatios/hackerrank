import java.util.Scanner;
import java.util.Arrays;

/*
    static boolean isAnagram(String a, String b) {
char[] CharA=a.toLowerCase().toCharArray();
char[] CharB=b.toLowerCase().toCharArray();
  Arrays.sort(CharA);
  Arrays.sort(CharB);
  if( Arrays.equals(CharA,CharB)){
      return true;
  }else{return false;}

    }*/
    public class Java_Anagrams {
    static boolean isAnagram(String a, String b) {
        String classA = a.toLowerCase();
        String classB = b.toLowerCase();
        char[] charA = classA.toCharArray();
        char[] charB = classB.toCharArray();
        int count[] = new int[26];
        if(charA.length!=charB.length )
        return false;
        for(int i=0;i<charA.length;i++)
        {
        count[charA[i]-97]++;
        count[charB[i]-97]--;
        }
        for(int i=0;i<26;i++)
        {
        if (count[i] != 0)
        return false;
        }
        return true;
        }
    

    public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}
    

// something i tried
// Cleaning the strings (remove white spaces and convert to lowercase)
//   a = a.replaceAll("\\s+","").toLowerCase();
//   b = b.replaceAll("\\s+","").toLowerCase();