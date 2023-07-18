// Solution without split operator in java

import java.util.*;
public class Hello {

    public static void main(String[] args) {
        
        String s = new Scanner(System.in).nextLine();
        
        StringBuilder sb;
        for(int i=s.length()-1; i>=0; i--){
            sb = new StringBuilder("");
            while(i>=0 && s.charAt(i)!=' '){
                sb.append(s.charAt(i));
                i--;
            }
            
            for(int j=sb.length()-1; j>=0; j--){
                System.out.print(sb.charAt(j));
            }
            System.out.print(" ");
        }

	}
}