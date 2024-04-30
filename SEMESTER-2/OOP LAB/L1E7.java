import java.util.Scanner;
class stringmanipulations{
    String input;
    stringmanipulations(String input){
        this.input=input;
    }
    int getlength(){
        return input.length();
    }
    char getcharacter(int index){
        return input.charAt(index);
    }
    String getsubstring(int startindex){
        return input.substring(startindex);
    }
    String getuppercase(){
        return input.toUpperCase();
    }
    String getlowercase(){
        return input.toLowerCase();
    }
    boolean checkequal(String input2){
        return input.equals(input2);
    }
    int indexof(char ch){
        return input.indexOf(ch);
    }
    int indexof(String str){
        return input.indexOf(str);
    }
}
class L1E7{
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the string :");
        String input=scanner.nextLine();
        stringmanipulations s1 = new stringmanipulations(input);
        System.out.println("The length of "+input+" is "+s1.getlength());
        System.out.println("Enter the index to find character :");
        int index=scanner.nextInt();
        System.out.println("the character at "+index+" is "+s1.getcharacter(index));
        System.out.println("Enter the start index :");
        int startindex=scanner.nextInt();
        System.out.println("the substring is : "+s1.getsubstring(startindex));
        System.out.println("the uppercase is : "+s1.getuppercase());
        System.out.println("the lowercase is : "+s1.getlowercase());
        System.out.println("enter another string to compare:");
        scanner.nextLine();
        String input2 = scanner.nextLine();
        System.out.println("are they equal? :"+s1.checkequal(input2));
        System.out.println("enter the character to find index:");
        char ch=scanner.next().charAt(0);
        System.out.println("the index of "+ch+ ":"+s1.indexof(ch));
        System.out.println("enter the substring to find index:");
        String substring = scanner.next();
        System.out.println("the index of "+substring+ ":"+s1.indexof(substring));
    }
}