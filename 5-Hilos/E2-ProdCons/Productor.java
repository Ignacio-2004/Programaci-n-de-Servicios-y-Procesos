public class Productor extends Thread{
    
    private int id;
    private Cola cola;

    public Productor(Cola cola, int id){

        this.id = id;
        this.cola = cola;

    }

    @Override
    public void run(){

        for(int i =0; i<=10; i++){

            cola.add(i);
            System.out.println("Productor: "+id+" he escrito: "+i);

        }

    }
   
}
