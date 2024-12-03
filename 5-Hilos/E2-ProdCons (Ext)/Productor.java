public class Productor extends Thread{
    
    private int id;
    private Cola cola;
    private final int nv = 10;

    public Productor(Cola cola, int id){

        this.id = id;
        this.cola = cola;

    }

    @Override
    public void run(){

        for(int i = 0; i<nv; i++){

            cola.addNum(id);
            try {
                sleep(500);
            } catch (InterruptedException e) {}
        }

    }
   
}
