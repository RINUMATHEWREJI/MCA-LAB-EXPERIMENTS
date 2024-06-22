import java.util.Scanner;
import java.util.ArrayList;
class Bank{
    private String name;
    private ArrayList<BankAccount> accounts;
    Bank(String name){
        this.name= name;
        this.accounts = new ArrayList<>();
    }
    void addaccount(BankAccount account){
        accounts.add(account);
        System.out.println("account added succesfully");
    }
    void removeaccount(int accountnumber){
        accounts.removeIf(account->account.get_account_number()==(accountnumber));
        System.out.println("account removed succesfully");
    }
    void display(){
        if(accounts.isEmpty()){
            System.out.println("no accounts");
        }
        else{
            System.out.println("accounts:");
        for(BankAccount account : accounts){
            System.out.println(account);
        }
        }
    }

}
class BankAccount{
    private int account_number;
    private Double balance;
    BankAccount(int account_number,Double balance){
        this.account_number = account_number;
        this.balance = balance;
    }
    int get_account_number(){
        return account_number;
    }
    Double get_balance(){
        return balance;
    }
     @Override
    public String toString() {
        return "Account Number: " + account_number + ", Balance: " + balance;
    }
}
class L2E16{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        Bank bank = new Bank("federal_bank");
        while(true){
            System.out.println("menu: ");
            System.out.println("1.add account");
            System.out.println("2.remove account ");
            System.out.println("3.display all accout");
            System.out.println("4.exit");
            System.out.print("enter your choice: ");
            int choice = scanner.nextInt();
            switch(choice){
                case 1:
                    System.out.println("enter the account number: ");
                    int number = scanner.nextInt();
                    System.out.println("enter initial balance: ");
                    Double balance = scanner.nextDouble();
                    bank.addaccount(new BankAccount(number,balance));
                    break;
                case 2:
                    System.out.println("enter the account number to remove: ");
                    int account_number = scanner.nextInt();
                    bank.removeaccount(account_number);
                    break;
                case 3:
                    bank.display();
                    break;
                case 4:
                    return;
                default:
                    System.out.println("invalid choice");
            }
        }
    }
}