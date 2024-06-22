import java.util.Scanner;
class TemperatureConverter{
    Double CelsiusToFarenheit(double celsius){
        if (celsius < -273.15){
            throw new IllegalArgumentException(celsius+" is below absolute zero.");
        }else{
            return celsius * 9 / 5 + 32;
        }
    }
    Double FarenheitToCelsius(double farenheit){
        if (farenheit < -459.67){
            throw new IllegalArgumentException(farenheit+" is below absolute zero");
        }else{
            return (farenheit - 32) * 5 / 9;
        }
    }
}
class L2E14{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        
        TemperatureConverter t1 = new TemperatureConverter();
        
        System.out.print("enter the temperature value: ");
        Double temperature = scanner.nextDouble();
        scanner.nextLine();

        System.out.print("enter the scale(c for celsius to farenheit and f for farenheit to celsius): ");
        String scale = scanner.nextLine();

        try{
            if (scale.equalsIgnoreCase("c")){
                Double result = t1.CelsiusToFarenheit(temperature);
                System.out.println(temperature+" celsius to farenheit is "+result);
            }
            else if(scale.equalsIgnoreCase("f")){
                Double result = t1.FarenheitToCelsius(temperature);
                System.out.println(temperature+" farenheit to celsius is "+result);
            }
            else{
                System.out.println("invalid scale . enter c or f");
            }
        }
        catch(IllegalArgumentException e){
            System.out.print("error: "+e.getMessage());
        }
    }
}