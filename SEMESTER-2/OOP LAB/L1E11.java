import com.mycompany.math.calculator;
import java.util.Scanner;
class L1E11{
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        System.out.print("enter the first number :");
        int num1 = scanner.nextInt();
        System.out.print("enter the second number :");
        int num2 = scanner.nextInt();
        System.out.println("Addition :"+ calculator.add(num1,num2));
        System.out.println("Addition :"+calculator.subtract(num1,num2));
        System.out.println("Addition :"+calculator.multiply(num1,num2));
        System.out.println("Addition :"+calculator.divide(num1,num2));
    }
}