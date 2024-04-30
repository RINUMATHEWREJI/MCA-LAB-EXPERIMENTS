import java.util.Random;
class L2E12{
    public static void main(String args[]){
        Random rand=new Random();
        System.out.println("Five numbers between 1 and 100 :");
        for(int i=0;i<5;i++){
            int randomnumber=rand.nextInt(100)+1;
            System.out.println(randomnumber);
        }
    }
}