public class Consumidor extends Thread{

    private int id;
    private Cola cola;

    public Consumidor(Cola cola,int id){
        
        this.id=id;
        this.cola = cola;
    }

    @Override
    public void run(){
        
        int sum = 0;
        int num = 1;

        for(int i =0; i<=10; i++){

            num = cola.getNum();
            sum+=num;
            System.out.println("Consumidor: "+id+" he leido: "+num+" la suma es: "+sum);

        }

    }
    
}
