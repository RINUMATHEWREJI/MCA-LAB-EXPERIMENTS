import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.io.FileNotFoundException;
import java.util.Scanner;
class FileOperation{
    void filecreate(String filename){
        try{
        File obj = new File(filename);
        if(obj.createNewFile()){
            System.out.println("file created: "+obj.getName());
        }
        else{
            System.out.println("file already exists");
        }
        
    }
    catch(IOException e){
        System.out.println("an error has occured");
        e.printStackTrace();
    }
    }
    void filewrite(String filename,String message){
        try{
            FileWriter Writer = new FileWriter(filename);
            Writer.write(message);
            Writer.close();
            System.out.println("successfully writen");
        }
        catch(IOException e){
            System.out.println("an error has occured");
            e.printStackTrace();
        }
    }

void readfile(String filename){
    try{
        File obj = new File(filename);
        Scanner reader = new Scanner(obj);
        while(reader.hasNextLine()){
            String data = reader.nextLine();
            System.out.println("file content: ");
            System.out.println(data);
        }
        reader.close();
        } 
        catch(FileNotFoundException e){
            System.out.println("an error has occured");
            e.printStackTrace();
        }
    }
    void deletefile(String filename){
        
            File obj = new File(filename);
            if(obj.delete()){
                System.out.println("file deleted: "+obj.getName());
            }
            else{
                System.out.println("failed in deleting the file.");
            }
        
    }
}
class L2E18{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        FileOperation f1 = new FileOperation();
        while(true){
            System.out.println("menu: ");
            System.out.println("1.create: ");
            System.out.println("2.write: ");
            System.out.println("3.read: ");
            System.out.println("4.delete: ");
            System.out.println("5.exit: ");
            System.out.println("enter your choice: ");
            int choice = scanner.nextInt();
            scanner.nextLine();
            switch(choice){
                case 1:
                    System.out.print("enter file name with extension: ");
                    String filename = scanner.nextLine();
                    f1.filecreate(filename);
                    break;
                case 2:
                    System.out.println("enter the filename to write: ");
                    String writefile = scanner.nextLine();
                    System.out.println("enter the message to write: ");
                    String message = scanner.nextLine();
                    f1.filewrite(writefile,message);
                    break;
                case 3:
                    System.out.println("enter the file with extension to read: ");
                    String readfilename = scanner.nextLine();
                    f1.readfile(readfilename);

                    break;
                case 4:
                    System.out.println("enter the file name to delete: ");
                    String deletefilename = scanner.nextLine();
                    f1.deletefile(deletefilename);

                    break;
                case 5:
                    scanner.close();
                    return;
                default:
                    System.out.println("invalid choice");


            }
        }
                
    } 
}