import java.util.Scanner;
class methodoverloading{
    float getarea(float r){
        return 3.14f*r*r;
    }
    float getarea(float base,float height){
        return 0.5f*base*height;
    }
    float getarea(double length,double breadth){
        return (float)(length*breadth);
    }

}
class L1E5{
    public static void main(String args[]){
        Scanner scanner=new Scanner(System.in);
        methodoverloading m1 = new methodoverloading();
        while(true){
            System.out.println("1. circle area");
            System.out.println("2. triangle area");
            System.out.println("3. Rectangle area");
            System.out.println("4. exit");
            System.out.print("enter you choice:");
            int choice=scanner.nextInt();
            switch(choice){
                case 1:
                    System.out.print("enter the radius of circle:");
                    float r = scanner.nextFloat();
                    float result1=m1.getarea(r);
                    System.out.println("area of circle is : "+result1);
                    break;
                case 2:
                    System.out.print("enter the base of triangle:");
                    float base = scanner.nextFloat();
                    System.out.print("enter the height of triangle:");
                    float height = scanner.nextFloat();
                    float result2=m1.getarea(base,height);
                    System.out.println("area of triangle is : "+result2);
                    break;
                case 3:
                    System.out.print("enter the length of rectangle:");
                    double length = scanner.nextDouble();
                    System.out.print("enter the breadth of rectangle:");
                    double breadth = scanner.nextDouble();
                    double result3=m1.getarea(length,breadth);
                    System.out.println("area of rectangle is : "+result3);
                    break;
                case 4:
                    System.exit(0);
                default:
                    System.out.println("invalid choice!!");

            }    
        }
        

    }
}