import java.util.Scanner;
class InvalidAgeException extends Exception{
    InvalidAgeException(String message){
        super(message);
    }
}
class VotingEligibility{
    int age;
    VotingEligibility(int age){
        this.age=age;
    }
    void checkage() throws InvalidAgeException{
        if (age<18){
            throw new InvalidAgeException("age less than 18 is not eligible to vote.");
        }
        else{
            System.out.println("you are eligible to vote.");
        }
    }
}
class L2E15{
    public static void main(String[] args){
        System.out.print("enter the age: ");
        Scanner scanner = new Scanner(System.in);
        int age = scanner.nextInt();
        VotingEligibility vote1 = new VotingEligibility(age);
        try{
            vote1.checkage();
        }
        catch(InvalidAgeException e){
            System.out.println("age problem: "+e.getMessage());
        }
    }
}