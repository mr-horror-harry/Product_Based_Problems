import java.util.*;
public class Hello {

    public static void main(String[] args) throws Exception {
        
        HashMap <String, Integer> map = new HashMap<>();
        
        Scanner sc = new Scanner(System.in);
        String ar[] = sc.nextLine().split("\\s");
        
        for(String s : ar)    
            map.put(s, 0);
            
        for(String s : ar)
            map.put(s, map.get(s)+1);
        
        int x = sc.nextInt(), ct=0;
        for(int i : map.values())
            if(i==x)
                ct++;
            
        System.out.print(ct);
	}
}