class bank{
    int account_number;
    String name;
    float account_balance;
    String account_type;
    bank(int a_n,String n,float a_b,String a_t){
        account_number = a_n;
        name = n;
        account_balance = a_b;
        account_type = a_t;
    }
    void deposit(float dep){
        account_balance = account_balance + dep;
        if(dep<=0){
            System.out.println("cannot deposit,deposit amount greater than 0");
        }else{
        System.out.println(dep+" deposited sucessfull");
        System.out.println("account balance after deposit is:"+account_balance);
        }
    }
    void withdrawn(float wdraw){
        if (account_balance<wdraw){
            System.out.println("insufficient balance!!,cannot withdrawn.");
        }
        else if(account_balance <= 0){
            System.out.println("insufficient balance!!,cannot withdrawn.");
        }
        else{
            account_balance = account_balance-wdraw;
            System.out.println(wdraw+" withdrawn succesfully.");
            System.out.println("account balance after withdrawn is: "+account_balance);
        }
    }
    void display(){
        System.out.println("Name:"+name);
        System.out.println("account balance is:"+account_balance);
    }

}
class L1E3{
    public static void main(String args[]){
        bank a1 = new bank(1,"dani",3000.00f,"savings");
        System.out.println("initial state of account 1:");
        a1.display();
        a1.deposit(500.00f);
        a1.withdrawn(700.00f);
        System.out.println("updated state of account 1:");
        a1.display();
        System.out.println();
        bank a2 = new bank(2,"allu",0.0f,"savings");
        System.out.println("initial state of account 2:");
        a2.display();
        a2.deposit(500.00f);
        a2.withdrawn(700.00f);
        System.out.println("updated state of account 2:");
        a2.display();
    }
}