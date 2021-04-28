import java.util.*;

public class JavaEndoffile {
     public static void main(String[] args) {
         
      {
         Scanner scan = new Scanner(System.in);
        String someString;
        int i = 1;
        while (scan.hasNext())
        {
            someString = scan.nextLine();
            System.out.println(i + " "+ someString);
            i++;
        }
     scan.close();
    }
}
}

