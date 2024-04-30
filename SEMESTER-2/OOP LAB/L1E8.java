import java.util.Scanner;
class cpu{
    Double price;
    class processor{
        int cores;
        String manufactures;
        processor(int cores,String manufactures){
            this.cores=cores;
            this.manufactures=manufactures;
        }
        void display(){
            System.out.println("cores : "+cores);
            System.out.println("Manufacturer : "+manufactures);
        }
    }
    static class ram{
        int memory;
        String manufactures;
        ram(int memory,String manufactures){
            this.memory=memory;
            this.manufactures=manufactures;
        }
        void display(){
            System.out.println("Memory : "+memory+"GB");
            System.out.println("Manufacturer : "+manufactures);
        }
    }
    cpu(double price){
        this.price=price;
    }
    void display(){
        System.out.println("Price : $"+price);
    }
}
class L1E8{
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the price of cpu :");
        double price = scanner.nextDouble();
        cpu c1 = new cpu(price);
        System.out.println("Enter the cores of processor :");
        int cores = scanner.nextInt();
        System.out.println("Enter the manufacturer of processor :");
        scanner.nextLine();
        String processormanufacturer = scanner.nextLine();
        cpu.processor p1 = c1.new processor(cores,processormanufacturer);
        System.out.println("Enter the memory of ram :");
        int memory = scanner.nextInt();
        System.out.println("Enter the manufacturer of ram :");
        scanner.nextLine();
        String rammanufacturer = scanner.nextLine();
        cpu.ram r1 = new cpu.ram(memory,rammanufacturer);
        System.out.println("Cpu information");
        c1.display();
        System.out.println("Processor information");
        p1.display();
        System.out.println("Ram information");
        r1.display();
    }
}