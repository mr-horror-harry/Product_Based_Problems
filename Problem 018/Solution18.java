import java.util.*;
public class Hello {

    public static void main(String[] args) {
        
        HashMap<Character, Integer> map = new LinkedHashMap<>();
        
        Scanner sc = new Scanner(System.in);
        char ar[] = sc.next().toCharArray();
        int n = sc.nextInt(), i;
        
        for(i=ar.length-1; i>=0; i--)
            map.put(ar[i], 0);
        
        for(char c:ar)
            map.put(c, map.get(c)+1);
            
        Iterator <Map.Entry<Character, Integer>> itr = map.entrySet().iterator();
        
        while(itr.hasNext()){
            Map.Entry<Character, Integer> entry = itr.next();
            if(entry.getValue()==n){
                System.out.print(entry.getKey());
                return;
            }
        }

        System.out.print(-1);
	}
}