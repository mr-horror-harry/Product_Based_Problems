import java.util.*;
public class Hello {

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), m=sc.nextInt();
        
        List <Integer> li = new ArrayList<Integer>();
        
        while(n-->0)
            li.add(sc.nextInt());
        
        Iterator itr;
        int x;
        
        while(m-->0){
            
            itr=li.iterator();
            x=sc.nextInt();
            
            while(itr.hasNext()){
                if((int)itr.next()%x == 0){
                    itr.remove();
                }
            }
            
        }
        
        if(li.size() == 0){
            System.out.print(-1);
            return;
        }
        
        itr=li.iterator();
        while(itr.hasNext())
            System.out.print(itr.next() + " ");

	}
}