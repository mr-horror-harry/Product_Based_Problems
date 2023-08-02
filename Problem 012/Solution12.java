import java.util.*;
public class Hello {

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        String s;
        int i, ct;
        
        try{
            while(true){
                s=sc.nextLine();
                i=0;
                ct=0;
                while(i<s.length()){
                    
                    if(s.charAt(i)=='1')
                        ct++;
                    
                    else{
                        System.out.printf("%c", ct+'a'-1);
                        ct=0;
                    }
                    i++;
                }
                System.out.printf("%c ", ct+'a'-1);
            }
        }
        catch(Exception e){
            
        }
        
	}
}