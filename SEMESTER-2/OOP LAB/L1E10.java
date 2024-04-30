import java.util.Scanner;
class Person{
    String name;
    String gender;
    String address;
    int age;
    Person(String name,String gender,String address,int age){
        this.name=name;
        this.gender=gender;
        this.age=age;
    }
    void display(){
        System.out.print("name : "+name);
        System.out.print("gender : "+gender);
        System.out.print("address : "+address);
        System.out.print("age : "+age);
    }
}
class Employee extends Person{
    int empid;
    String company_name;
    String qualification;
    Double salary;
    Employee(String name,String gender,String address,int age,int empid,String company_name,String qualification,Double salary){
        super(name,gender,address,age);
        this.empid=empid;
        this.company_name=company_name;
        this.qualification=qualification;
        this.salary=salary;
    }
    void display(){
        super.display();
        System.out.print("Empid : "+empid);
        System.out.print("company name : "+company_name);
        System.out.print("qualification : "+qualification);
        System.out.print("salary : "+salary);
    }
}
class Teacher extends Employee{
    String subject;
    String department;
    int teacherid;
    
    Teacher(String name,String gender,String address,int age,int empid,String company_name,String qualification,Double salary,String subject,String department,int teacherid){
    super(name,gender,address,age,empid,company_name,qualification, salary);
    this.subject=subject;
    this.department=department;
    this.teacherid=teacherid;
    }
    void readteacher(){
        Scanner scanner = new Scanner(System.in);
        
    }
    void display(){
        super.display();
        System.out.print("subject : "+subject);
        System.out.print("department : "+department);
        System.out.print("teacherid : "+teacherid);
    }
}
class L1E10{
    public static void main(String args[]){
        Scanner scanner=new Scanner(System.in);
        System.out.println("enter the number of teachers :");
        int size=scanner.nextInt();
        scanner.nextLine();
        Teacher teacher[]=new Teacher[size];
        for(int i=0;i<size;i++){
            System.out.println("enter details of teacher:"+(i+1));
            System.out.println("enter name :");
            String name=scanner.nextLine();
            System.out.println("enter gender :");
            String gender=scanner.nextLine();
            System.out.println("enter address :");
            String address=scanner.nextLine();
            System.out.println("enter age :");
            int age=scanner.nextInt();
            System.out.println("enter employee id :");
            int empid=scanner.nextInt();
            scanner.nextLine();
            System.out.println("enter company name :");
            String company_name=scanner.nextLine();
            System.out.println("enter qualification :");
            String qualification=scanner.nextLine();
            System.out.println("enter salary :");
            Double salary=scanner.nextDouble();
            scanner.nextLine();
            System.out.println("enter subject :");
            String subject=scanner.nextLine();
            System.out.println("enter department :");
            String department=scanner.nextLine();
            System.out.println("enter teacherid:");
            int teacherid=scanner.nextInt();
            scanner.nextLine();
            teacher[i]=new Teacher(name,gender,address,age,empid,company_name,qualification,salary,subject,department,teacherid);
        }
        for(int i=0;i<size;i++){
            System.out.println("\nTeacher " + (i + 1) + ":");
            teacher[i].display();
        }

    }
}