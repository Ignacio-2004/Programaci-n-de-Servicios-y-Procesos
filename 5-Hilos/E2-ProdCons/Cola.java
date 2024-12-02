import java.util.ArrayList;

public class Cola {

    private ArrayList<Integer>nums;
    private final int  MAXSIZE = 5;
    private boolean isFull = false; 

    public Cola(){
        
        nums =new ArrayList<Integer>();

    }

    public synchronized boolean add(int num){
        
        while (isFull) {
            
            try {
                wait();
            } catch (InterruptedException e) {}

        }

        nums.add(num);
        
        if (nums.size()==MAXSIZE) {
            isFull=true;
        }
        
        notify();

        return true;
        
    }

    public synchronized int getNum(){
        
        while (nums.isEmpty()) {
            try {
                notify();
                wait();
            } catch (InterruptedException e) {}
        }

        if (nums.size()<MAXSIZE){
            notify();
        }

        isFull=false;

        return nums.get(0);

    }
    
}
