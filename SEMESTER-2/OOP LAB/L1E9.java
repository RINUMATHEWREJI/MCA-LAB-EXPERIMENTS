import java.util.Scanner;
class Employee{
    int eno;
    String ename;
    Double salary;
    Employee employee[];
    Employee(int size){
        employee = new Employee[size];
    }
    Employee(int eno,String ename,Double salary){
        this.eno=eno;
        this.ename=ename;
        this.salary=salary;
    }
    void addemployee(){
        Scanner scanner = new Scanner(System.in); 
        for(int i=0;i<employee.length;i++){
            System.out.println("details of employee"+(i+1));
            System.out.print("employee number : ");
            int eno = scanner.nextInt();
            scanner.nextLine(); 
            System.out.print("employee name :");
            String ename = scanner.nextLine();
            System.out.print("employee salary : ");
            Double salary = scanner.nextDouble();
            employee[i] = new Employee(eno,ename,salary);
        }
    }
    void searchemployee(int searchno){
        boolean found=false;
        for(int i=0;i<employee.length;i++){
            if(employee[i].eno==searchno){
                System.out.println("employee found!!");
                System.out.print("employee no :"+employee[i].eno);
                System.out.println("employee name :"+employee[i].ename);
                System.out.println("employee salary :"+employee[i].salary);
                found=true;
            }
        }
        if(!found){
            System.out.println("the employee of no "+searchno+" not found!!");
        }
    }
}
class L1E9{
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        System.out.print("enter the no of employees :");
        int size= scanner.nextInt();
        Employee e1 = new Employee(size);
        e1.addemployee();
        System.out.print("enter the employee number to search:");
        int searchno= scanner.nextInt();
        e1.searchemployee(searchno);
    }
}