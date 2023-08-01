import java.util.*;
public class Hello {

    public static void main(String[] args) {
        
        HashMap<Character, Integer> map = new HashMap<>();
        
        char ar[] = new Scanner(System.in).next().toCharArray();
        int max=0;
        StringBuilder sb = new StringBuilder("");
        
        for(char c:ar)
            map.put(c, 0);
        
        for(char c:ar){
            map.put(c, map.get(c)+1);
            
            if(map.get(c) > max){
                max=map.get(c);
                sb = new StringBuilder("");
                sb.append(c);
            }
            else if(map.get(c) == max)
                sb.append(c);
            
        }
        
    for(char c:ar)
        if(sb.toString().contains(c+""))
            System.out.print(c);
        
	}
}