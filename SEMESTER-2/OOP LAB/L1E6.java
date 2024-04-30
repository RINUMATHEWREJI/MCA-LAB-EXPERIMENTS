import java.util.Scanner;
import java.util.Arrays;
class StringOperations{
    String stringArray[];
    int numofstrings=0;
    StringOperations(int size){
        stringArray=new String[size];
    }
    void addstrings(String str){
        if(numofstrings<stringArray.length){
            stringArray[numofstrings]=str;
            numofstrings++;
        }
        else{
            System.out.println("cannot insert,array is full");
        }
    }
    boolean searchstring(String searchstr){
        for(int i=0;i<stringArray.length;i++){
            if(stringArray[i].equals(searchstr)){
                System.out.println(searchstr+" found at position "+i);
                return true;
            }
        }
        return false;
    }
    void sortstring(){
        System.out.println("the sorted string of array is:");
        Arrays.sort(stringArray,0,numofstrings);
        for(int i=0;i<numofstrings;i++){
            System.out.println(stringArray[i]);
        }
    }
}
class L1E6{
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        System.out.print("enter the size of array:");
        int n = Integer.parseInt(scanner.nextLine());
        StringOperations s1 = new StringOperations(n);
        System.out.println("enter the strings:");
        for(int i=0;i<n;i++){
            String str = scanner.nextLine();
            s1.addstrings(str);
        }
        System.out.println("enter the string to search:");
        String searchstr=scanner.nextLine();
        boolean value=s1.searchstring(searchstr);
        if(value==false){
            System.out.println(searchstr+" not found in array");
        }

        s1.sortstring();
    }
}